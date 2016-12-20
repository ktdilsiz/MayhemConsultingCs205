/********************************************************************************
** Form generated from reading UI file 'grouppage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPPAGE_H
#define UI_GROUPPAGE_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupPage
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_groupname;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_groupinfo;
    QPushButton *pushButton_groupsettings;
    QListWidget *listWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sendmessage;
    QTextEdit *textEdit_messagetext;
    QPushButton *pushButton_sendmessage;

    void setupUi(QWidget *GroupPage)
    {
        if (GroupPage->objectName().isEmpty())
            GroupPage->setObjectName(QStringLiteral("GroupPage"));
        GroupPage->resize(800, 600);
        layoutWidget = new QWidget(GroupPage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 531));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_groupname = new QLabel(layoutWidget);
        label_groupname->setObjectName(QStringLiteral("label_groupname"));

        horizontalLayout->addWidget(label_groupname);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_groupinfo = new QPushButton(layoutWidget);
        pushButton_groupinfo->setObjectName(QStringLiteral("pushButton_groupinfo"));

        horizontalLayout->addWidget(pushButton_groupinfo);

        pushButton_groupsettings = new QPushButton(layoutWidget);
        pushButton_groupsettings->setObjectName(QStringLiteral("pushButton_groupsettings"));

        horizontalLayout->addWidget(pushButton_groupsettings);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        widget = new QWidget(GroupPage);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 550, 781, 41));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_sendmessage = new QLabel(widget);
        label_sendmessage->setObjectName(QStringLiteral("label_sendmessage"));

        horizontalLayout_2->addWidget(label_sendmessage);

        textEdit_messagetext = new QTextEdit(widget);
        textEdit_messagetext->setObjectName(QStringLiteral("textEdit_messagetext"));

        horizontalLayout_2->addWidget(textEdit_messagetext);

        pushButton_sendmessage = new QPushButton(widget);
        pushButton_sendmessage->setObjectName(QStringLiteral("pushButton_sendmessage"));

        horizontalLayout_2->addWidget(pushButton_sendmessage);


        retranslateUi(GroupPage);

        QMetaObject::connectSlotsByName(GroupPage);
    } // setupUi

    void retranslateUi(QWidget *GroupPage)
    {
        GroupPage->setWindowTitle(QApplication::translate("GroupPage", "Form", 0));
        label_groupname->setText(QApplication::translate("GroupPage", "Group Name", 0));
        pushButton_groupinfo->setText(QApplication::translate("GroupPage", "Group Info", 0));
        pushButton_groupsettings->setText(QApplication::translate("GroupPage", "Group Settings", 0));
        label_sendmessage->setText(QApplication::translate("GroupPage", "Send Message", 0));
        pushButton_sendmessage->setText(QApplication::translate("GroupPage", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupPage: public Ui_GroupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPPAGE_H
