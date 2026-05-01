/********************************************************************************
** Form generated from reading UI file 'StudentManagement.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagementClass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *UserNameText;
    QLineEdit *UserNameField;
    QLabel *PasswordText;
    QLineEdit *PasswordField;
    QPushButton *LoginButton;
    QPushButton *SignUpPageButton;
    QSpacerItem *verticalSpacer_2;
    QWidget *SignUpPage;
    QWidget *SettingsPage;
    QWidget *MailPage;
    QWidget *MainMenuPage;

    void setupUi(QMainWindow *StudentManagementClass)
    {
        if (StudentManagementClass->objectName().isEmpty())
            StudentManagementClass->setObjectName(QString::fromUtf8("StudentManagementClass"));
        StudentManagementClass->resize(800, 600);
        centralwidget = new QWidget(StudentManagementClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        verticalLayoutWidget = new QWidget(LoginPage);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 10, 771, 571));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        UserNameText = new QLabel(verticalLayoutWidget);
        UserNameText->setObjectName(QString::fromUtf8("UserNameText"));

        verticalLayout_2->addWidget(UserNameText);

        UserNameField = new QLineEdit(verticalLayoutWidget);
        UserNameField->setObjectName(QString::fromUtf8("UserNameField"));

        verticalLayout_2->addWidget(UserNameField);

        PasswordText = new QLabel(verticalLayoutWidget);
        PasswordText->setObjectName(QString::fromUtf8("PasswordText"));

        verticalLayout_2->addWidget(PasswordText);

        PasswordField = new QLineEdit(verticalLayoutWidget);
        PasswordField->setObjectName(QString::fromUtf8("PasswordField"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PasswordField->sizePolicy().hasHeightForWidth());
        PasswordField->setSizePolicy(sizePolicy);
        PasswordField->setMaxLength(32767);

        verticalLayout_2->addWidget(PasswordField);

        LoginButton = new QPushButton(verticalLayoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        verticalLayout_2->addWidget(LoginButton);

        SignUpPageButton = new QPushButton(verticalLayoutWidget);
        SignUpPageButton->setObjectName(QString::fromUtf8("SignUpPageButton"));

        verticalLayout_2->addWidget(SignUpPageButton);

        verticalSpacer_2 = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        stackedWidget->addWidget(LoginPage);
        SignUpPage = new QWidget();
        SignUpPage->setObjectName(QString::fromUtf8("SignUpPage"));
        stackedWidget->addWidget(SignUpPage);
        SettingsPage = new QWidget();
        SettingsPage->setObjectName(QString::fromUtf8("SettingsPage"));
        stackedWidget->addWidget(SettingsPage);
        MailPage = new QWidget();
        MailPage->setObjectName(QString::fromUtf8("MailPage"));
        stackedWidget->addWidget(MailPage);
        MainMenuPage = new QWidget();
        MainMenuPage->setObjectName(QString::fromUtf8("MainMenuPage"));
        stackedWidget->addWidget(MainMenuPage);

        verticalLayout->addWidget(stackedWidget);

        StudentManagementClass->setCentralWidget(centralwidget);

        retranslateUi(StudentManagementClass);

        QMetaObject::connectSlotsByName(StudentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManagementClass)
    {
        StudentManagementClass->setWindowTitle(QApplication::translate("StudentManagementClass", "Student Management System", nullptr));
        UserNameText->setText(QApplication::translate("StudentManagementClass", "e-mail:", nullptr));
        PasswordText->setText(QApplication::translate("StudentManagementClass", "password:", nullptr));
        LoginButton->setText(QApplication::translate("StudentManagementClass", "Login", nullptr));
        SignUpPageButton->setText(QApplication::translate("StudentManagementClass", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
