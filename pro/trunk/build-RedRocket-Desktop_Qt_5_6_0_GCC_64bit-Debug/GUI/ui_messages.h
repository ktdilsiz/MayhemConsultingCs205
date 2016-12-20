/********************************************************************************
** Form generated from reading UI file 'messages.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGES_H
#define UI_MESSAGES_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messages
{
public:
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_username;
    QPushButton *pushButton_mainfeed;
    QPushButton *pushButton_groups;
    QPushButton *pushButton_settings;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_enter_username;
    QLineEdit *lineEdit_enter_username;
    QPushButton *pushButton_startchat;

    void setupUi(QWidget *Messages)
    {
        if (Messages->objectName().isEmpty())
            Messages->setObjectName(QStringLiteral("Messages"));
        Messages->resize(500, 400);
        listWidget = new QListWidget(Messages);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(11, 43, 481, 301));
        widget = new QWidget(Messages);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 11, 481, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton_username = new QPushButton(widget);
        pushButton_username->setObjectName(QStringLiteral("pushButton_username"));

        horizontalLayout->addWidget(pushButton_username);

        pushButton_mainfeed = new QPushButton(widget);
        pushButton_mainfeed->setObjectName(QStringLiteral("pushButton_mainfeed"));

        horizontalLayout->addWidget(pushButton_mainfeed);

        pushButton_groups = new QPushButton(widget);
        pushButton_groups->setObjectName(QStringLiteral("pushButton_groups"));

        horizontalLayout->addWidget(pushButton_groups);

        pushButton_settings = new QPushButton(widget);
        pushButton_settings->setObjectName(QStringLiteral("pushButton_settings"));

        horizontalLayout->addWidget(pushButton_settings);

        widget1 = new QWidget(Messages);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 360, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_enter_username = new QLabel(widget1);
        label_enter_username->setObjectName(QStringLiteral("label_enter_username"));

        horizontalLayout_2->addWidget(label_enter_username);

        lineEdit_enter_username = new QLineEdit(widget1);
        lineEdit_enter_username->setObjectName(QStringLiteral("lineEdit_enter_username"));

        horizontalLayout_2->addWidget(lineEdit_enter_username);

        pushButton_startchat = new QPushButton(widget1);
        pushButton_startchat->setObjectName(QStringLiteral("pushButton_startchat"));

        horizontalLayout_2->addWidget(pushButton_startchat);


        retranslateUi(Messages);

        QMetaObject::connectSlotsByName(Messages);
    } // setupUi

    void retranslateUi(QWidget *Messages)
    {
        Messages->setWindowTitle(QApplication::translate("Messages", "Form", 0));
        label->setText(QApplication::translate("Messages", "Messages", 0));
        pushButton_username->setText(QApplication::translate("Messages", "Username", 0));
        pushButton_mainfeed->setText(QApplication::translate("Messages", "Main Feed", 0));
        pushButton_groups->setText(QApplication::translate("Messages", "Groups", 0));
        pushButton_settings->setText(QApplication::translate("Messages", "Settings", 0));
        label_enter_username->setText(QApplication::translate("Messages", "Enter Username:", 0));
        pushButton_startchat->setText(QApplication::translate("Messages", "Chat", 0));
    } // retranslateUi

};

namespace Ui {
    class Messages: public Ui_Messages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGES_H
