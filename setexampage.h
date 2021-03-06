#ifndef SETEXAMPAGE
#define SETEXAMPAGE

#include <QWidget>
#include <QPushButton>
#include <QtWidgets>
#include <QtSql>
#include <QTableView>
#include "examstatus.h"

class SetExamPage : public QWidget
{
    Q_OBJECT

public:
    SetExamPage(ExamStatus *examstatus,QWidget *parent=0);
    void InitPage();

public slots:
    void SubmitChange();
    void NewExam();
    void RemoveExam();
    void SelectExamForGlobal();

private:
    ExamStatus *examstatus;
    QSqlTableModel *model;
    QTableView *view;
    QComboBox *serverCombo;
    QLabel *serverLabel;
    QGroupBox *configGroup;
    QPushButton *okButton;
    QPushButton *selectExamButton;
    QPushButton *newExamButton;
    QPushButton *deleteExamButton;
    enum{
        Exam_Name = 0,
        Exam_Leibie = 1,
        Exam_Date = 2,
        Exam_Ducument = 3
    };
};

#endif
