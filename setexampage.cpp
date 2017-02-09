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

    QTableView *view = new QTableView;
    view->setModel(model);
    //view->setEditTriggers(QAbstractItemView::EditTrigger());
    //view->show();

    QPushButton *okButton = new QPushButton(tr("提交"),this);
    connect(okButton, SIGNAL(clicked()), this, SLOT(SubmitChange()));
    /*test layout*/
    QPushButton *selectExamButton = new QPushButton(tr("确定"),this);
    QHBoxLayout *selectExam = new QHBoxLayout;
    selectExam->addWidget(serverCombo);
    selectExam->addWidget(selectExamButton);
    selectExam->addStretch(1);
    /* test layout*/
    QVBoxLayout *serverLayout = new QVBoxLayout;
    serverLayout->addWidget(serverLabel);
    serverLayout->addLayout(selectExam);
    serverLayout->addWidget(view);
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
