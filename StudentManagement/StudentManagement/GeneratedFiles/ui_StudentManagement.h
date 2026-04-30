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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagementClass
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *_mail;
    QLineEdit *_password;
    QPushButton *btnLogin;
    QPushButton *btnGoToSignup;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QWidget *page_dashboard;

    void setupUi(QMainWindow *StudentManagementClass)
    {
        if (StudentManagementClass->objectName().isEmpty())
            StudentManagementClass->setObjectName(QString::fromUtf8("StudentManagementClass"));
        StudentManagementClass->resize(800, 600);
        centralwidget = new QWidget(StudentManagementClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _mail = new QLineEdit(centralwidget);
        _mail->setObjectName(QString::fromUtf8("_mail"));

        verticalLayout->addWidget(_mail);

        _password = new QLineEdit(centralwidget);
        _password->setObjectName(QString::fromUtf8("_password"));
        _password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(_password);

        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        verticalLayout->addWidget(btnLogin);

        btnGoToSignup = new QPushButton(centralwidget);
        btnGoToSignup->setObjectName(QString::fromUtf8("btnGoToSignup"));

        verticalLayout->addWidget(btnGoToSignup);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_login = new QWidget();
        page_login->setObjectName(QString::fromUtf8("page_login"));
        stackedWidget->addWidget(page_login);
        page_dashboard = new QWidget();
        page_dashboard->setObjectName(QString::fromUtf8("page_dashboard"));
        stackedWidget->addWidget(page_dashboard);

        verticalLayout->addWidget(stackedWidget);

        StudentManagementClass->setCentralWidget(centralwidget);

        retranslateUi(StudentManagementClass);

        QMetaObject::connectSlotsByName(StudentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManagementClass)
    {
        StudentManagementClass->setWindowTitle(QApplication::translate("StudentManagementClass", "Student Management System", nullptr));
        _mail->setPlaceholderText(QApplication::translate("StudentManagementClass", "Email", nullptr));
        _password->setPlaceholderText(QApplication::translate("StudentManagementClass", "Password", nullptr));
        btnLogin->setText(QApplication::translate("StudentManagementClass", "Login", nullptr));
        btnGoToSignup->setText(QApplication::translate("StudentManagementClass", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
