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
    setWindowIcon(QIcon(":/images/icon.png")); //设置窗体标题上的图标
}

void MainPage::createIcons()
{
    QListWidgetItem *setExamPageButton = new QListWidgetItem(contentsWidget);
    setExamPageButton->setIcon(QIcon(":/images/config.png"));
    setExamPageButton->setText(tr("考试维护"));
    setExamPageButton->setTextAlignment(Qt::AlignHCenter);
    setExamPageButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *SetExamKemuPage = new QListWidgetItem(contentsWidget);
    SetExamKemuPage->setIcon(QIcon(":/images/kemu.png"));
    SetExamKemuPage->setText(tr("考试科目管理"));
    SetExamKemuPage->setTextAlignment(Qt::AlignHCenter);
    SetExamKemuPage->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    QListWidgetItem *KaoshengBaoMingPage = new QListWidgetItem(contentsWidget);
    KaoshengBaoMingPage->setIcon(QIcon(":/images/kaosheng.png"));
    KaoshengBaoMingPage->setText(tr("考生报名管理"));
    KaoshengBaoMingPage->setTextAlignment(Qt::AlignHCenter);
    KaoshengBaoMingPage->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
     
    QListWidgetItem *KaoChangGuanLiPage = new QListWidgetItem(contentsWidget);
    KaoChangGuanLiPage->setIcon(QIcon(":/images/kaodian.png"));
    KaoChangGuanLiPage->setText(tr("考点管理"));
    KaoChangGuanLiPage->setTextAlignment(Qt::AlignHCenter);
    KaoChangGuanLiPage->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

    connect(contentsWidget, &QListWidget::currentItemChanged, this, &MainPage::changePage);
}

void MainPage::changePage(QListWidgetItem *current, QListWidgetItem *previous)
{
    if (!current)
        current = previous;

    pagesWidget->setCurrentIndex(contentsWidget->row(current));
}

//void MainPage::createStatusBar()
//{
    //locationLabel = new QLable("W999");
    //locationLabel->setAlignment(Qt::AlighHCenter);
    //locationLabel->setMinimumSize(locationLabel->sizeHint());

    //formulaLabel = new QLabel;
    //formulaLabel->setIndent(3);

    //statusBar()->addWidget(locationLabel);
    //statusBar()->addWidget(formulaLabel,1);
    //connect(spreadsheet,SIGNAL(currentCellChanged(int,int,int,int)),
            //this,SLOT(updateStatusBar()));
    //connect(spreadsheet,SIGNAL(modified()),this,SLOT(spreadsheetModified()));
    //updateStatusBar();
//} 
