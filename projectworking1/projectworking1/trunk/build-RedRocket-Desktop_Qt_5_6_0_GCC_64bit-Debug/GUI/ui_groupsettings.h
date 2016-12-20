/********************************************************************************
** Form generated from reading UI file 'groupsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSETTINGS_H
#define UI_GROUPSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupSettings
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_username;
    QPushButton *pushButton_groupfeed;
    QPushButton *pushButton_groupsettings;

    void setupUi(QWidget *GroupSettings)
    {
        if (GroupSettings->objectName().isEmpty())
            GroupSettings->setObjectName(QStringLiteral("GroupSettings"));
        GroupSettings->resize(590, 400);
        layoutWidget = new QWidget(GroupSettings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 566, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton_username = new QPushButton(layoutWidget);
        pushButton_username->setObjectName(QStringLiteral("pushButton_username"));

        horizontalLayout->addWidget(pushButton_username);

        pushButton_groupfeed = new QPushButton(layoutWidget);
        pushButton_groupfeed->setObjectName(QStringLiteral("pushButton_groupfeed"));

        horizontalLayout->addWidget(pushButton_groupfeed);

        pushButton_groupsettings = new QPushButton(layoutWidget);
        pushButton_groupsettings->setObjectName(QStringLiteral("pushButton_groupsettings"));

        horizontalLayout->addWidget(pushButton_groupsettings);


        retranslateUi(GroupSettings);

        QMetaObject::connectSlotsByName(GroupSettings);
    } // setupUi

    void retranslateUi(QWidget *GroupSettings)
    {
        GroupSettings->setWindowTitle(QApplication::translate("GroupSettings", "Form", 0));
        label->setText(QApplication::translate("GroupSettings", "Group Name", 0));
        pushButton_username->setText(QApplication::translate("GroupSettings", "Username", 0));
        pushButton_groupfeed->setText(QApplication::translate("GroupSettings", "Group Feed", 0));
        pushButton_groupsettings->setText(QApplication::translate("GroupSettings", "Group Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class GroupSettings: public Ui_GroupSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSETTINGS_H
