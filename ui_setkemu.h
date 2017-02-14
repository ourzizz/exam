/********************************************************************************
** Form generated from reading UI file 'setkemu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETKEMU_H
#define UI_SETKEMU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetKeMu
{
public:
    QGroupBox *setkemugropbox;
    QTableView *kemuView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *newKemuButton;
    QPushButton *deleteKemuButton;
    QSpacerItem *verticalSpacer;
    QPushButton *submitButton;

    void setupUi(QWidget *SetKeMu)
    {
        if (SetKeMu->objectName().isEmpty())
            SetKeMu->setObjectName(QStringLiteral("SetKeMu"));
        SetKeMu->resize(785, 496);
        setkemugropbox = new QGroupBox(SetKeMu);
        setkemugropbox->setObjectName(QStringLiteral("setkemugropbox"));
        setkemugropbox->setGeometry(QRect(30, 20, 651, 401));
        kemuView = new QTableView(setkemugropbox);
        kemuView->setObjectName(QStringLiteral("kemuView"));
        kemuView->setGeometry(QRect(30, 40, 491, 351));
        verticalLayoutWidget = new QWidget(setkemugropbox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(540, 40, 101, 191));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        newKemuButton = new QPushButton(verticalLayoutWidget);
        newKemuButton->setObjectName(QStringLiteral("newKemuButton"));

        verticalLayout_3->addWidget(newKemuButton);

        deleteKemuButton = new QPushButton(verticalLayoutWidget);
        deleteKemuButton->setObjectName(QStringLiteral("deleteKemuButton"));

        verticalLayout_3->addWidget(deleteKemuButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        submitButton = new QPushButton(verticalLayoutWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        verticalLayout_3->addWidget(submitButton);


        retranslateUi(SetKeMu);

        QMetaObject::connectSlotsByName(SetKeMu);
    } // setupUi

    void retranslateUi(QWidget *SetKeMu)
    {
        SetKeMu->setWindowTitle(QApplication::translate("SetKeMu", "Form", Q_NULLPTR));
        setkemugropbox->setTitle(QApplication::translate("SetKeMu", "\347\247\221\347\233\256\351\205\215\347\275\256", Q_NULLPTR));
        newKemuButton->setText(QApplication::translate("SetKeMu", "\346\226\260\345\273\272\347\247\221\347\233\256", Q_NULLPTR));
        deleteKemuButton->setText(QApplication::translate("SetKeMu", "\345\210\240\351\231\244\347\247\221\347\233\256", Q_NULLPTR));
        submitButton->setText(QApplication::translate("SetKeMu", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetKeMu: public Ui_SetKeMu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETKEMU_H
