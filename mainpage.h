#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QtWidgets/QStatusBar>
#include "ExamStatus.h"

QT_BEGIN_NAMESPACE
class QListWidget;
class QListWidgetItem;
class QStackedWidget;
QT_END_NAMESPACE

class MainPage : public QWidget
{
    Q_OBJECT

public:
    MainPage();

public slots:
    void changePage(QListWidgetItem *current, QListWidgetItem *previous);
    void updateStatubar();

private:
    void createIcons();
    void CreateStatusbar();

    QListWidget *contentsWidget;
    QStatusBar *statusBar;
    QStackedWidget *pagesWidget;
    ExamStatus *examstatus;
    QLabel *bartitle;
    QLabel *examnameLabel;
    QLabel *examkaochangLabel;
};


#endif
