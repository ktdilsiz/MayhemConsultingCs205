/********************************************************************************
** Form generated from reading UI file 'groups.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPS_H
#define UI_GROUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Groups
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_username;
    QPushButton *pushButton_mainfeed;
    QPushButton *pushButton_groups;
    QPushButton *pushButton_messages;
    QPushButton *pushButton_settings;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_enter_username;
    QLineEdit *lineEdit_enter_groupname;
    QPushButton *pushButton_startchat;

    void setupUi(QWidget *Groups)
    {
        if (Groups->objectName().isEmpty())
            Groups->setObjectName(QStringLiteral("Groups"));
        Groups->resize(540, 400);
        layoutWidget = new QWidget(Groups);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 521, 381));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton_username = new QPushButton(layoutWidget);
        pushButton_username->setObjectName(QStringLiteral("pushButton_username"));

        horizontalLayout->addWidget(pushButton_username);

        pushButton_mainfeed = new QPushButton(layoutWidget);
        pushButton_mainfeed->setObjectName(QStringLiteral("pushButton_mainfeed"));

        horizontalLayout->addWidget(pushButton_mainfeed);

        pushButton_groups = new QPushButton(layoutWidget);
        pushButton_groups->setObjectName(QStringLiteral("pushButton_groups"));

        horizontalLayout->addWidget(pushButton_groups);

        pushButton_messages = new QPushButton(layoutWidget);
        pushButton_messages->setObjectName(QStringLiteral("pushButton_messages"));

        horizontalLayout->addWidget(pushButton_messages);

        pushButton_settings = new QPushButton(layoutWidget);
        pushButton_settings->setObjectName(QStringLiteral("pushButton_settings"));

        horizontalLayout->addWidget(pushButton_settings);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_enter_username = new QLabel(layoutWidget);
        label_enter_username->setObjectName(QStringLiteral("label_enter_username"));

        horizontalLayout_2->addWidget(label_enter_username);

        lineEdit_enter_groupname = new QLineEdit(layoutWidget);
        lineEdit_enter_groupname->setObjectName(QStringLiteral("lineEdit_enter_groupname"));

        horizontalLayout_2->addWidget(lineEdit_enter_groupname);

        pushButton_startchat = new QPushButton(layoutWidget);
        pushButton_startchat->setObjectName(QStringLiteral("pushButton_startchat"));

        horizontalLayout_2->addWidget(pushButton_startchat);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Groups);

        QMetaObject::connectSlotsByName(Groups);
    } // setupUi

    void retranslateUi(QWidget *Groups)
    {
        Groups->setWindowTitle(QApplication::translate("Groups", "Form", 0));
        label->setText(QApplication::translate("Groups", "Groups", 0));
        pushButton_username->setText(QApplication::translate("Groups", "Username", 0));
        pushButton_mainfeed->setText(QApplication::translate("Groups", "Main Feed", 0));
        pushButton_groups->setText(QApplication::translate("Groups", "Groups", 0));
        pushButton_messages->setText(QApplication::translate("Groups", "Messages", 0));
        pushButton_settings->setText(QApplication::translate("Groups", "Settings", 0));
        label_enter_username->setText(QApplication::translate("Groups", "Enter Group:", 0));
        pushButton_startchat->setText(QApplication::translate("Groups", "Chat", 0));
    } // retranslateUi

};

namespace Ui {
    class Groups: public Ui_Groups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPS_H
