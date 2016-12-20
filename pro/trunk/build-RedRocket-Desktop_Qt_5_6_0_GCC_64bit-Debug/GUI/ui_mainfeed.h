/********************************************************************************
** Form generated from reading UI file 'mainfeed.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFEED_H
#define UI_MAINFEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFeed
{
public:
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_username;
    QPushButton *pushButton_groups;
    QPushButton *pushButton_messages;
    QPushButton *pushButton_settings;

    void setupUi(QWidget *MainFeed)
    {
        if (MainFeed->objectName().isEmpty())
            MainFeed->setObjectName(QStringLiteral("MainFeed"));
        MainFeed->resize(800, 600);
        listWidget = new QListWidget(MainFeed);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 781, 551));
        listWidget->setAcceptDrops(false);
        layoutWidget = new QWidget(MainFeed);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton_username = new QPushButton(layoutWidget);
        pushButton_username->setObjectName(QStringLiteral("pushButton_username"));

        horizontalLayout->addWidget(pushButton_username);

        pushButton_groups = new QPushButton(layoutWidget);
        pushButton_groups->setObjectName(QStringLiteral("pushButton_groups"));

        horizontalLayout->addWidget(pushButton_groups);

        pushButton_messages = new QPushButton(layoutWidget);
        pushButton_messages->setObjectName(QStringLiteral("pushButton_messages"));

        horizontalLayout->addWidget(pushButton_messages);

        pushButton_settings = new QPushButton(layoutWidget);
        pushButton_settings->setObjectName(QStringLiteral("pushButton_settings"));

        horizontalLayout->addWidget(pushButton_settings);


        retranslateUi(MainFeed);

        QMetaObject::connectSlotsByName(MainFeed);
    } // setupUi

    void retranslateUi(QWidget *MainFeed)
    {
        MainFeed->setWindowTitle(QApplication::translate("MainFeed", "Form", 0));
        label_2->setText(QApplication::translate("MainFeed", "Main Feed", 0));
        pushButton_username->setText(QApplication::translate("MainFeed", "Username", 0));
        pushButton_groups->setText(QApplication::translate("MainFeed", "Groups", 0));
        pushButton_messages->setText(QApplication::translate("MainFeed", "Messages", 0));
        pushButton_settings->setText(QApplication::translate("MainFeed", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainFeed: public Ui_MainFeed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFEED_H
