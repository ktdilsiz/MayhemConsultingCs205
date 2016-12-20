/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_username;
    QPushButton *pushButton_mainfeed;
    QPushButton *pushButton_groups;
    QPushButton *pushButton_messages;
    QPushButton *pushButton_settings;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_newpost;
    QTextEdit *textEdit_posttext;
    QPushButton *pushButton_post;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QStringLiteral("Profile"));
        Profile->resize(800, 600);
        listWidget = new QListWidget(Profile);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 50, 781, 481));
        layoutWidget = new QWidget(Profile);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
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

        widget = new QWidget(Profile);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 540, 781, 51));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_newpost = new QLabel(widget);
        label_newpost->setObjectName(QStringLiteral("label_newpost"));

        horizontalLayout_2->addWidget(label_newpost);

        textEdit_posttext = new QTextEdit(widget);
        textEdit_posttext->setObjectName(QStringLiteral("textEdit_posttext"));

        horizontalLayout_2->addWidget(textEdit_posttext);

        pushButton_post = new QPushButton(widget);
        pushButton_post->setObjectName(QStringLiteral("pushButton_post"));

        horizontalLayout_2->addWidget(pushButton_post);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QApplication::translate("Profile", "Form", 0));
        label->setText(QApplication::translate("Profile", "User Profile", 0));
        pushButton_username->setText(QApplication::translate("Profile", "Username", 0));
        pushButton_mainfeed->setText(QApplication::translate("Profile", "Main Feed", 0));
        pushButton_groups->setText(QApplication::translate("Profile", "Groups", 0));
        pushButton_messages->setText(QApplication::translate("Profile", "Messages", 0));
        pushButton_settings->setText(QApplication::translate("Profile", "Settings", 0));
        label_newpost->setText(QApplication::translate("Profile", "New Post:", 0));
        pushButton_post->setText(QApplication::translate("Profile", "Post", 0));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
