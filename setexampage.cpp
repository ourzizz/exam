#include <QtWidgets>
#include <QPushButton>
#include <QMessageBox>
#include <QVariant>
#include "setexampage.h"

SetExamPage::SetExamPage(QWidget *parent)
    : QWidget(parent)
{
    QGroupBox *configGroup = new QGroupBox(tr("请选择考试"));
    QLabel *serverLabel = new QLabel(tr("考试名称:"));
    QComboBox *serverCombo = new QComboBox;

    model= new QSqlTableModel(this);
    model->setTable("exam");
    model->select();

    for(int i=0; i < model->rowCount() ;i++)
    {
        QSqlRecord record = model->record(i);
        serverCombo->addItem(record.value("ex_name").toString());
    }

    view = new QTableView;
    view->setModel(model);

    QPushButton *okButton = new QPushButton(tr("提交"),this);
    connect(okButton, SIGNAL(clicked()), this, SLOT(SubmitChange()));
    /*test layout*/
    QPushButton *selectExamButton = new QPushButton(tr("确定"),this);
    QHBoxLayout *selectExam = new QHBoxLayout;
    selectExam->addWidget(serverCombo);
    selectExam->addWidget(selectExamButton);
    selectExam->addStretch(1);
    /* test layout*/

    /* table view layout*/
    QPushButton *newExamButton = new QPushButton(tr("新建考试"),this);
    connect(newExamButton, SIGNAL(clicked()), this, SLOT(NewExam()));
    QPushButton *deleteExamButton = new QPushButton(tr("删除考试"),this);
    connect(deleteExamButton, SIGNAL(clicked()), this, SLOT(RemoveExam()));
    QVBoxLayout *ExamButtonsLayout = new QVBoxLayout;
    ExamButtonsLayout->addWidget(newExamButton);
    ExamButtonsLayout->addWidget(deleteExamButton);
    ExamButtonsLayout->addStretch(1);
    QHBoxLayout *setExamLayout = new QHBoxLayout;
    setExamLayout->addWidget(view);
    setExamLayout->addStretch();
    setExamLayout->addLayout(ExamButtonsLayout);
    /* table view layout*/

    QVBoxLayout *serverLayout = new QVBoxLayout;
    serverLayout->addWidget(serverLabel);
    serverLayout->addLayout(selectExam);
    serverLayout->addLayout(setExamLayout);
    serverLayout->addWidget(okButton);

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
    model->removeRow(curRow);
    int ret = QMessageBox::warning(this, tr("要删除吗"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard
                                   | QMessageBox::Cancel,
                                   QMessageBox::Save);
    if(ret == QMessageBox::Cancel)
    {
        model->revertAll(); //如果不删除，则撤销
    }
    else model->submitAll(); //否则提交，在数据库中删除该行
}
