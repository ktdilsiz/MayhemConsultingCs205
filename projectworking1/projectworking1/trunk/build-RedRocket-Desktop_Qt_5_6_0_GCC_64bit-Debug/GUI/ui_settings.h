/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_username;
    QLabel *label_settings;
    QPushButton *pushButton_mainfeed;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_firstname;
    QLineEdit *lineEdit_firstname;
    QPushButton *pushButton_firstname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_lastname;
    QLineEdit *lineEdit_lastname;
    QPushButton *pushButton_lastname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QPushButton *pushButton_email;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_phone;
    QLineEdit *lineEdit_phone;
    QPushButton *pushButton_phone;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(400, 300);
        horizontalLayoutWidget = new QWidget(Settings);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 9, 381, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_username = new QPushButton(horizontalLayoutWidget);
        pushButton_username->setObjectName(QStringLiteral("pushButton_username"));

        horizontalLayout->addWidget(pushButton_username);

        label_settings = new QLabel(horizontalLayoutWidget);
        label_settings->setObjectName(QStringLiteral("label_settings"));

        horizontalLayout->addWidget(label_settings);

        pushButton_mainfeed = new QPushButton(horizontalLayoutWidget);
        pushButton_mainfeed->setObjectName(QStringLiteral("pushButton_mainfeed"));

        horizontalLayout->addWidget(pushButton_mainfeed);

        layoutWidget = new QWidget(Settings);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 50, 381, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_firstname = new QLabel(layoutWidget);
        label_firstname->setObjectName(QStringLiteral("label_firstname"));

        horizontalLayout_2->addWidget(label_firstname);

        lineEdit_firstname = new QLineEdit(layoutWidget);
        lineEdit_firstname->setObjectName(QStringLiteral("lineEdit_firstname"));

        horizontalLayout_2->addWidget(lineEdit_firstname);

        pushButton_firstname = new QPushButton(layoutWidget);
        pushButton_firstname->setObjectName(QStringLiteral("pushButton_firstname"));

        horizontalLayout_2->addWidget(pushButton_firstname);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_lastname = new QLabel(layoutWidget);
        label_lastname->setObjectName(QStringLiteral("label_lastname"));

        horizontalLayout_3->addWidget(label_lastname);

        lineEdit_lastname = new QLineEdit(layoutWidget);
        lineEdit_lastname->setObjectName(QStringLiteral("lineEdit_lastname"));

        horizontalLayout_3->addWidget(lineEdit_lastname);

        pushButton_lastname = new QPushButton(layoutWidget);
        pushButton_lastname->setObjectName(QStringLiteral("pushButton_lastname"));

        horizontalLayout_3->addWidget(pushButton_lastname);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_email = new QLabel(layoutWidget);
        label_email->setObjectName(QStringLiteral("label_email"));

        horizontalLayout_4->addWidget(label_email);

        lineEdit_email = new QLineEdit(layoutWidget);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        horizontalLayout_4->addWidget(lineEdit_email);

        pushButton_email = new QPushButton(layoutWidget);
        pushButton_email->setObjectName(QStringLiteral("pushButton_email"));

        horizontalLayout_4->addWidget(pushButton_email);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_phone = new QLabel(layoutWidget);
        label_phone->setObjectName(QStringLiteral("label_phone"));

        horizontalLayout_5->addWidget(label_phone);

        lineEdit_phone = new QLineEdit(layoutWidget);
        lineEdit_phone->setObjectName(QStringLiteral("lineEdit_phone"));

        horizontalLayout_5->addWidget(lineEdit_phone);

        pushButton_phone = new QPushButton(layoutWidget);
        pushButton_phone->setObjectName(QStringLiteral("pushButton_phone"));

        horizontalLayout_5->addWidget(pushButton_phone);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", 0));
        pushButton_username->setText(QApplication::translate("Settings", "Username", 0));
        label_settings->setText(QApplication::translate("Settings", "Settings", 0));
        pushButton_mainfeed->setText(QApplication::translate("Settings", "Main Feed", 0));
        label_firstname->setText(QApplication::translate("Settings", "First Name:", 0));
        pushButton_firstname->setText(QApplication::translate("Settings", "Save Change", 0));
        label_lastname->setText(QApplication::translate("Settings", "Last Name:", 0));
        pushButton_lastname->setText(QApplication::translate("Settings", "Save Change", 0));
        label_email->setText(QApplication::translate("Settings", "Email:", 0));
        pushButton_email->setText(QApplication::translate("Settings", "Save Change", 0));
        label_phone->setText(QApplication::translate("Settings", "Phone Number:", 0));
        pushButton_phone->setText(QApplication::translate("Settings", "Save Change", 0));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
