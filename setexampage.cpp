#include <QtWidgets>
#include <QPushButton>
#include <QMessageBox>
#include "setexampage.h"

SetExamPage::SetExamPage(QWidget *parent)
    : QWidget(parent)
{
    configGroup = new QGroupBox(tr("考试设置"));
    serverLabel = new QLabel(tr("请选择考试:"));
    serverCombo = new QComboBox;
    model= new QSqlTableModel(this);
    view = new QTableView;
    InitPage();

    /*test layout*/
    selectExamButton = new QPushButton(tr("确定"),this);
    connect(selectExamButton, SIGNAL(clicked()), this, SLOT(SelectExamForGlobal()));
    QHBoxLayout *selectExam = new QHBoxLayout;
    selectExam->addWidget(serverLabel);
    selectExam->addWidget(serverCombo);
    selectExam->addWidget(selectExamButton);
    selectExam->addStretch(1);
    /* test layout*/

    /* table view layout*/
    newExamButton = new QPushButton(tr("新建考试"),this);
    connect(newExamButton, SIGNAL(clicked()), this, SLOT(NewExam()));
    deleteExamButton = new QPushButton(tr("删除考试"),this);
    connect(deleteExamButton, SIGNAL(clicked()), this, SLOT(RemoveExam()));
    okButton = new QPushButton(tr("提交修改"),this);
    connect(okButton, SIGNAL(clicked()), this, SLOT(SubmitChange()));
    QVBoxLayout *ExamButtonsLayout = new QVBoxLayout;
    ExamButtonsLayout->addWidget(newExamButton);
    ExamButtonsLayout->addWidget(deleteExamButton);
    ExamButtonsLayout->addStretch(1);
    ExamButtonsLayout->addWidget(okButton);
    //ExamButtonsLayout->addStretch(1);
    QHBoxLayout *setExamLayout = new QHBoxLayout;
    setExamLayout->addWidget(view);
    //setExamLayout->addStretch();
    setExamLayout->addLayout(ExamButtonsLayout);
    /* table view layout*/

    QVBoxLayout *serverLayout = new QVBoxLayout;
    serverLayout->addLayout(setExamLayout);
    serverLayout->addLayout(selectExam);
    //serverLayout->addWidget(okButton);

    QVBoxLayout *configLayout = new QVBoxLayout;
    configLayout->addLayout(serverLayout);
    configGroup->setLayout(configLayout);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(configGroup);
    mainLayout->addStretch(1);
    setLayout(mainLayout);
}
void SetExamPage::SubmitChange()
{
    model->database().transaction();
    if(model->submitAll())
    {
        InitPage();
        model->database().commit();
        QMessageBox::critical(0,QObject::tr("Database success"), "submit成功");
    }
    else
    {
        model->database().rollback();
        QMessageBox::warning(0, QObject::tr("Database Error"),
                             model->lastError().text());
        model->revertAll();//撤销修改
    }
}
void SetExamPage::NewExam()
{
    int rowNum = model->rowCount();
    model->insertRow(rowNum);
    //model->setData(model->index(rowNum,0));

}
void SetExamPage::RemoveExam()
{
    int curRow = view->currentIndex().row();
    QString test =  "确定要删除<" + model->data(model->index(curRow,0)).toString()+">考试吗？";
    int ret = QMessageBox::warning(this, tr("要删除吗"),
                                   //tr("本操作将删除当前选中的考试\n" "是否删除?"),
                                   test,
                                   QMessageBox::Yes | QMessageBox::Cancel, QMessageBox::Cancel);
    if(ret != QMessageBox::Cancel)
    {
        model->removeRow(curRow);
        //model->submitAll(); //否则提交，在数据库中删除该行
        InitPage();
    }
    else
    {
        model->revertAll(); //如果不删除，则撤销
    }
}

void SetExamPage::InitPage()
{
    model->setTable("exam");
    model->select();
    model->setHeaderData(Exam_Name,Qt::Horizontal,tr("考试名称"));
    model->setHeaderData(Exam_Leibie,Qt::Horizontal,tr("考试类别"));
    model->setHeaderData(Exam_Date,Qt::Horizontal,tr("考试日期"));
    model->setHeaderData(Exam_Ducument,Qt::Horizontal,tr("考试文件"));
    serverCombo->clear();
    for(int i=0; i < model->rowCount() ;i++)
    {
        QSqlRecord record = model->record(i);
        serverCombo->addItem(record.value("ex_name").toString());
    }
    view->setModel(model);
}
void SetExamPage::SelectExamForGlobal()
{
}
