#ifndef SETEXAMPAGE
#define SETEXAMPAGE

#include <QWidget>
#include <QtSql>

class SetExamPage : public QWidget
{
    Q_OBJECT

public:
    SetExamPage(QWidget *parent=0);

public slots:
    void SubmitChange();
private:
    QSqlTableModel *model;
};

#endif
