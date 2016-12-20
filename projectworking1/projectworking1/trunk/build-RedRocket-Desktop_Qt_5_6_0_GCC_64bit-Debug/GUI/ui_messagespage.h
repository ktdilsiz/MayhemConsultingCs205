/********************************************************************************
** Form generated from reading UI file 'messagespage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGESPAGE_H
#define UI_MESSAGESPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessagesPage
{
public:
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_currentlymessaging;
    QLabel *label_recipientuser;
    QSpacerItem *horizontalSpacer;
    QLabel *label_username;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sendmessage;
    QTextEdit *textEdit_typemessage;
    QPushButton *pushButton_sendmessage;

    void setupUi(QWidget *MessagesPage)
    {
        if (MessagesPage->objectName().isEmpty())
            MessagesPage->setObjectName(QStringLiteral("MessagesPage"));
        MessagesPage->resize(800, 600);
        listWidget = new QListWidget(MessagesPage);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 771, 461));
        widget = new QWidget(MessagesPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 781, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_currentlymessaging = new QLabel(widget);
        label_currentlymessaging->setObjectName(QStringLiteral("label_currentlymessaging"));

        horizontalLayout->addWidget(label_currentlymessaging);

        label_recipientuser = new QLabel(widget);
        label_recipientuser->setObjectName(QStringLiteral("label_recipientuser"));

        horizontalLayout->addWidget(label_recipientuser);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_username = new QLabel(widget);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout->addWidget(label_username);

        widget1 = new QWidget(MessagesPage);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 540, 771, 51));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_sendmessage = new QLabel(widget1);
        label_sendmessage->setObjectName(QStringLiteral("label_sendmessage"));

        horizontalLayout_2->addWidget(label_sendmessage);

        textEdit_typemessage = new QTextEdit(widget1);
        textEdit_typemessage->setObjectName(QStringLiteral("textEdit_typemessage"));

        horizontalLayout_2->addWidget(textEdit_typemessage);

        pushButton_sendmessage = new QPushButton(widget1);
        pushButton_sendmessage->setObjectName(QStringLiteral("pushButton_sendmessage"));

        horizontalLayout_2->addWidget(pushButton_sendmessage);


        retranslateUi(MessagesPage);

        QMetaObject::connectSlotsByName(MessagesPage);
    } // setupUi

    void retranslateUi(QWidget *MessagesPage)
    {
        MessagesPage->setWindowTitle(QApplication::translate("MessagesPage", "Form", 0));
        label_currentlymessaging->setText(QApplication::translate("MessagesPage", "Currently Messaging User:", 0));
        label_recipientuser->setText(QApplication::translate("MessagesPage", "User", 0));
        label_username->setText(QApplication::translate("MessagesPage", "Username", 0));
        label_sendmessage->setText(QApplication::translate("MessagesPage", "Send Message:", 0));
        pushButton_sendmessage->setText(QApplication::translate("MessagesPage", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class MessagesPage: public Ui_MessagesPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGESPAGE_H
