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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
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
    QHBoxLayout *horizontalLayout_page;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_1;
    QSpacerItem *verticalSpacer_2;
    QLabel *UserNameText;
    QLineEdit *UserNameField;
    QLabel *PasswordText;
    QLineEdit *PasswordField;
    QPushButton *LoginButton;
    QPushButton *SignUpPageButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *SignUpPage;
    QHBoxLayout *horizontalLayout_signup;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *SurnameText;
    QLineEdit *SurnameField;
    QLabel *NameText;
    QLineEdit *NameField;
    QLabel *EmailText;
    QLineEdit *EmailField;
    QLabel *DobText;
    QDateEdit *DobField;
    QLabel *PasswordTextSignUp;
    QLineEdit *PasswordFieldSignUp;
    QPushButton *SignUpButton;
    QPushButton *LoginPageButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *SettingsPage;
    QWidget *MailPage;
    QWidget *MainMenuPage;
    QVBoxLayout *verticalLayout_MainMenu;
    QFrame *navigationBar;
    QHBoxLayout *horizontalLayout_nav;
    QPushButton *MainMenuPageButton;
    QPushButton *MailPageButton;
    QPushButton *SettingsPageButton;
    QPushButton *LogoutButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *EnrollmentText;
    QListWidget *EnrollmentListWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *AssignmentsText;
    QTreeWidget *AssignmentsTreeWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *SubmissionsText;
    QTreeWidget *SubmissionsTreeWidget;

    void setupUi(QMainWindow *StudentManagementClass)
    {
        if (StudentManagementClass->objectName().isEmpty())
            StudentManagementClass->setObjectName(QString::fromUtf8("StudentManagementClass"));
        StudentManagementClass->resize(1600, 1000);
        centralwidget = new QWidget(StudentManagementClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        horizontalLayout_page = new QHBoxLayout(LoginPage);
        horizontalLayout_page->setObjectName(QString::fromUtf8("horizontalLayout_page"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_page->addItem(horizontalSpacer);

        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_2);

        UserNameText = new QLabel(LoginPage);
        UserNameText->setObjectName(QString::fromUtf8("UserNameText"));
        UserNameText->setMinimumSize(QSize(400, 0));

        verticalLayout_1->addWidget(UserNameText);

        UserNameField = new QLineEdit(LoginPage);
        UserNameField->setObjectName(QString::fromUtf8("UserNameField"));

        verticalLayout_1->addWidget(UserNameField);

        PasswordText = new QLabel(LoginPage);
        PasswordText->setObjectName(QString::fromUtf8("PasswordText"));

        verticalLayout_1->addWidget(PasswordText);

        PasswordField = new QLineEdit(LoginPage);
        PasswordField->setObjectName(QString::fromUtf8("PasswordField"));
        PasswordField->setEchoMode(QLineEdit::Password);

        verticalLayout_1->addWidget(PasswordField);

        LoginButton = new QPushButton(LoginPage);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        verticalLayout_1->addWidget(LoginButton);

        SignUpPageButton = new QPushButton(LoginPage);
        SignUpPageButton->setObjectName(QString::fromUtf8("SignUpPageButton"));

        verticalLayout_1->addWidget(SignUpPageButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        horizontalLayout_page->addLayout(verticalLayout_1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_page->addItem(horizontalSpacer_2);

        stackedWidget->addWidget(LoginPage);
        SignUpPage = new QWidget();
        SignUpPage->setObjectName(QString::fromUtf8("SignUpPage"));
        horizontalLayout_signup = new QHBoxLayout(SignUpPage);
        horizontalLayout_signup->setObjectName(QString::fromUtf8("horizontalLayout_signup"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_signup->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        SurnameText = new QLabel(SignUpPage);
        SurnameText->setObjectName(QString::fromUtf8("SurnameText"));
        SurnameText->setMinimumSize(QSize(400, 0));

        verticalLayout_2->addWidget(SurnameText);

        SurnameField = new QLineEdit(SignUpPage);
        SurnameField->setObjectName(QString::fromUtf8("SurnameField"));

        verticalLayout_2->addWidget(SurnameField);

        NameText = new QLabel(SignUpPage);
        NameText->setObjectName(QString::fromUtf8("NameText"));

        verticalLayout_2->addWidget(NameText);

        NameField = new QLineEdit(SignUpPage);
        NameField->setObjectName(QString::fromUtf8("NameField"));

        verticalLayout_2->addWidget(NameField);

        EmailText = new QLabel(SignUpPage);
        EmailText->setObjectName(QString::fromUtf8("EmailText"));

        verticalLayout_2->addWidget(EmailText);

        EmailField = new QLineEdit(SignUpPage);
        EmailField->setObjectName(QString::fromUtf8("EmailField"));

        verticalLayout_2->addWidget(EmailField);

        DobText = new QLabel(SignUpPage);
        DobText->setObjectName(QString::fromUtf8("DobText"));

        verticalLayout_2->addWidget(DobText);

        DobField = new QDateEdit(SignUpPage);
        DobField->setObjectName(QString::fromUtf8("DobField"));

        verticalLayout_2->addWidget(DobField);

        PasswordTextSignUp = new QLabel(SignUpPage);
        PasswordTextSignUp->setObjectName(QString::fromUtf8("PasswordTextSignUp"));

        verticalLayout_2->addWidget(PasswordTextSignUp);

        PasswordFieldSignUp = new QLineEdit(SignUpPage);
        PasswordFieldSignUp->setObjectName(QString::fromUtf8("PasswordFieldSignUp"));
        PasswordFieldSignUp->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(PasswordFieldSignUp);

        SignUpButton = new QPushButton(SignUpPage);
        SignUpButton->setObjectName(QString::fromUtf8("SignUpButton"));

        verticalLayout_2->addWidget(SignUpButton);

        LoginPageButton = new QPushButton(SignUpPage);
        LoginPageButton->setObjectName(QString::fromUtf8("LoginPageButton"));

        verticalLayout_2->addWidget(LoginPageButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_signup->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_signup->addItem(horizontalSpacer_4);

        stackedWidget->addWidget(SignUpPage);
        SettingsPage = new QWidget();
        SettingsPage->setObjectName(QString::fromUtf8("SettingsPage"));
        stackedWidget->addWidget(SettingsPage);
        MailPage = new QWidget();
        MailPage->setObjectName(QString::fromUtf8("MailPage"));
        stackedWidget->addWidget(MailPage);
        MainMenuPage = new QWidget();
        MainMenuPage->setObjectName(QString::fromUtf8("MainMenuPage"));
        verticalLayout_MainMenu = new QVBoxLayout(MainMenuPage);
        verticalLayout_MainMenu->setObjectName(QString::fromUtf8("verticalLayout_MainMenu"));
        navigationBar = new QFrame(MainMenuPage);
        navigationBar->setObjectName(QString::fromUtf8("navigationBar"));
        navigationBar->setMinimumSize(QSize(0, 60));
        navigationBar->setMaximumSize(QSize(16777215, 60));
        navigationBar->setFrameShape(QFrame::StyledPanel);
        navigationBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_nav = new QHBoxLayout(navigationBar);
        horizontalLayout_nav->setObjectName(QString::fromUtf8("horizontalLayout_nav"));
        horizontalLayout_nav->setContentsMargins(10, 0, 10, 0);
        MainMenuPageButton = new QPushButton(navigationBar);
        MainMenuPageButton->setObjectName(QString::fromUtf8("MainMenuPageButton"));

        horizontalLayout_nav->addWidget(MainMenuPageButton);

        MailPageButton = new QPushButton(navigationBar);
        MailPageButton->setObjectName(QString::fromUtf8("MailPageButton"));

        horizontalLayout_nav->addWidget(MailPageButton);

        SettingsPageButton = new QPushButton(navigationBar);
        SettingsPageButton->setObjectName(QString::fromUtf8("SettingsPageButton"));

        horizontalLayout_nav->addWidget(SettingsPageButton);

        LogoutButton = new QPushButton(navigationBar);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));

        horizontalLayout_nav->addWidget(LogoutButton);


        verticalLayout_MainMenu->addWidget(navigationBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        EnrollmentText = new QLabel(MainMenuPage);
        EnrollmentText->setObjectName(QString::fromUtf8("EnrollmentText"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        EnrollmentText->setFont(font);
        EnrollmentText->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(EnrollmentText);

        EnrollmentListWidget = new QListWidget(MainMenuPage);
        EnrollmentListWidget->setObjectName(QString::fromUtf8("EnrollmentListWidget"));

        verticalLayout_3->addWidget(EnrollmentListWidget);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        AssignmentsText = new QLabel(MainMenuPage);
        AssignmentsText->setObjectName(QString::fromUtf8("AssignmentsText"));
        AssignmentsText->setFont(font);
        AssignmentsText->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(AssignmentsText);

        AssignmentsTreeWidget = new QTreeWidget(MainMenuPage);
        AssignmentsTreeWidget->setObjectName(QString::fromUtf8("AssignmentsTreeWidget"));

        verticalLayout_4->addWidget(AssignmentsTreeWidget);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SubmissionsText = new QLabel(MainMenuPage);
        SubmissionsText->setObjectName(QString::fromUtf8("SubmissionsText"));
        SubmissionsText->setFont(font);
        SubmissionsText->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(SubmissionsText);

        SubmissionsTreeWidget = new QTreeWidget(MainMenuPage);
        SubmissionsTreeWidget->setObjectName(QString::fromUtf8("SubmissionsTreeWidget"));

        verticalLayout_5->addWidget(SubmissionsTreeWidget);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_MainMenu->addLayout(horizontalLayout);

        stackedWidget->addWidget(MainMenuPage);

        verticalLayout->addWidget(stackedWidget);

        StudentManagementClass->setCentralWidget(centralwidget);

        retranslateUi(StudentManagementClass);

        QMetaObject::connectSlotsByName(StudentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManagementClass)
    {
        StudentManagementClass->setWindowTitle(QApplication::translate("StudentManagementClass", "Student Management System", nullptr));
        UserNameText->setText(QApplication::translate("StudentManagementClass", "E-mail:", nullptr));
        PasswordText->setText(QApplication::translate("StudentManagementClass", "Password:", nullptr));
        LoginButton->setText(QApplication::translate("StudentManagementClass", "Login", nullptr));
        SignUpPageButton->setText(QApplication::translate("StudentManagementClass", "Sign up", nullptr));
        SurnameText->setText(QApplication::translate("StudentManagementClass", "Surname:", nullptr));
        NameText->setText(QApplication::translate("StudentManagementClass", "Name:", nullptr));
        EmailText->setText(QApplication::translate("StudentManagementClass", "E-mail:", nullptr));
        DobText->setText(QApplication::translate("StudentManagementClass", "Date of birth:", nullptr));
        PasswordTextSignUp->setText(QApplication::translate("StudentManagementClass", "Password:", nullptr));
        SignUpButton->setText(QApplication::translate("StudentManagementClass", "Sign up", nullptr));
        LoginPageButton->setText(QApplication::translate("StudentManagementClass", "Back to Login", nullptr));
        MainMenuPageButton->setText(QApplication::translate("StudentManagementClass", "Main Menu", nullptr));
        MailPageButton->setText(QApplication::translate("StudentManagementClass", "Mails", nullptr));
        SettingsPageButton->setText(QApplication::translate("StudentManagementClass", "Settings", nullptr));
        LogoutButton->setText(QApplication::translate("StudentManagementClass", "Log out", nullptr));
        EnrollmentText->setText(QApplication::translate("StudentManagementClass", "Enrollment", nullptr));
        AssignmentsText->setText(QApplication::translate("StudentManagementClass", "Assignments", nullptr));
        SubmissionsText->setText(QApplication::translate("StudentManagementClass", "Submission + Grades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
