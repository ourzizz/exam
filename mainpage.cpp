#include <QtWidgets>
#include "mainpage.h"
#include "setexampage.h"
#include "setexamkemupage.h"

MainPage::MainPage()
{
    contentsWidget = new QListWidget;
    contentsWidget->setViewMode(QListView::IconMode);
    contentsWidget->setIconSize(QSize(86, 64));
    contentsWidget->setMovement(QListView::Free);
    contentsWidget->setMaximumWidth(128);
    contentsWidget->setMaximumHeight(3000);
    contentsWidget->setSpacing(12);
    
    pagesWidget = new QStackedWidget;
    pagesWidget->addWidget(new SetExamPage);
    pagesWidget->addWidget(new SetExamKemuPage);
    //pagesWidget->addWidget(new UpdatePage);
    //pagesWidget->addWidget(new QueryPage);

    QPushButton *closeButton = new QPushButton(tr("Close"));

    createIcons();/*{{{*/
    contentsWidget->setCurrentRow(0);

    connect(closeButton, &QAbstractButton::clicked, this, &QWidget::close);

    QHBoxLayout *horizontalLayout = new QHBoxLayout;
    horizontalLayout->addWidget(contentsWidget);
    horizontalLayout->addWidget(pagesWidget, 1);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    buttonsLayout->addStretch(1);
    buttonsLayout->addWidget(closeButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(horizontalLayout);
    //mainLayout->addStretch(1);
    mainLayout->addSpacing(12);
    mainLayout->addLayout(buttonsLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("欢迎使用"));/*}}}*/
}

void MainPage::createIcons()
{
    QListWidgetItem *setExamPageButton = new QListWidgetItem(contentsWidget);
    setExamPageButton->setIcon(QIcon(":/images/config.png"));
    setExamPageButton->setText(tr("考试维护"));
    setExamPageButton->setTextAlignment(Qt::AlignHCenter);
    setExamPageButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *SetExamKemuPage = new QListWidgetItem(contentsWidget);
    SetExamKemuPage->setIcon(QIcon(":/images/update.png"));
    SetExamKemuPage->setText(tr("Update"));
    SetExamKemuPage->setTextAlignment(Qt::AlignHCenter);
    SetExamKemuPage->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    connect(contentsWidget, &QListWidget::currentItemChanged, this, &MainPage::changePage);
}

void MainPage::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;

    pagesWidget->setCurrentIndex(contentsWidget->row(current));
}
