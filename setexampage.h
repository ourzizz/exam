#ifndef SETEXAMPAGE
#define SETEXAMPAGE

#include <QWidget>
#include <QtSql>
#include <QTableView>

class SetExamPage : public QWidget
{
    Q_OBJECT

public:
    SetExamPage(QWidget *parent=0);

public slots:
    void SubmitChange();
    void NewExam();
    void RemoveExam();

private:
    QSqlTableModel *model;
    QTableView *view;
};

#endif
