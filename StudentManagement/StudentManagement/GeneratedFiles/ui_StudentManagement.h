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
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QLabel *label;
    QComboBox *RoleFieldSignUp;
    QLabel *ChildsName;
    QLineEdit *ChildsNameField;
    QPushButton *SignUpButton;
    QPushButton *LoginPageButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *SettingsPage;
    QVBoxLayout *verticalLayout_SettingsPage;
    QFrame *navigationBarSettings;
    QHBoxLayout *horizontalLayout_navSettings;
    QPushButton *MainMenuPageButtonSettings;
    QPushButton *MailPageButtonSettings;
    QPushButton *SettingsPageButtonSettings;
    QPushButton *LogoutButtonSettings;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_6;
    QLabel *SettingsTitle;
    QLabel *SurnameTextSettings;
    QLineEdit *SurnameFieldSettings;
    QLabel *NameTextSettings;
    QLineEdit *NameFieldSettings;
    QLabel *EmailTextSettings;
    QLineEdit *EmailFieldSettings;
    QLabel *DobTextSettings;
    QDateEdit *DobFieldSettings;
    QLabel *PasswordTextSettings;
    QLineEdit *PasswordFieldSettings;
    QPushButton *SaveSettingsButton;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QWidget *MailPage;
    QVBoxLayout *verticalLayout_MailPage;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_navMail;
    QPushButton *MainMenuPageButtonMail;
    QPushButton *MailPageButtonMail;
    QPushButton *SettingsPageButtonMail;
    QPushButton *LogoutButtonMail;
    QTabWidget *tabWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_Inbox;
    QListWidget *MailInbox;
    QTextEdit *MailInboxInhoud;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_Sent;
    QListWidget *MailSent;
    QTextEdit *MailSentInhoud;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_NewMail;
    QLineEdit *MailTo;
    QLineEdit *MailSubject;
    QTextEdit *MailBody;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *SendMailButton;
    QWidget *MainMenuPage;
    QVBoxLayout *verticalLayout_MainMenu;
    QFrame *NavigationBarFrame;
    QHBoxLayout *horizontalLayout_nav;
    QPushButton *MainMenuPageButtonMainMenu;
    QPushButton *MailPageButtonMainMenu;
    QPushButton *SettingsPageButtonMainMenu;
    QPushButton *LogoutButtonMainMenu;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *AddSubjectButton;
    QListWidget *EnrollmentListWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *AddAssignmentButton;
    QTreeWidget *AssignmentsTreeWidget;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *CourseInfoText;
    QLabel *label_7;
    QLabel *AssignmentInfoText;
    QLabel *label_9;
    QLabel *DescriptionText_2;
    QLabel *label_11;
    QPushButton *DownloadFileButton;
    QPushButton *CloseAssignmentInfoButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *CreateAssignmentText;
    QLabel *SelectCourseText;
    QComboBox *SelectCourseComboBox;
    QLabel *TitleText;
    QLineEdit *TitleField;
    QLabel *DescriptionText;
    QLineEdit *DescriptionField;
    QLabel *SelectFileText;
    QPushButton *SelectFileButton;
    QPushButton *CreateAssignmentButton;
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
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        horizontalLayout_page = new QHBoxLayout(LoginPage);
        horizontalLayout_page->setSpacing(6);
        horizontalLayout_page->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_page->setObjectName(QString::fromUtf8("horizontalLayout_page"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_page->addItem(horizontalSpacer);

        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(6);
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
        horizontalLayout_signup->setSpacing(6);
        horizontalLayout_signup->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_signup->setObjectName(QString::fromUtf8("horizontalLayout_signup"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_signup->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
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

        label = new QLabel(SignUpPage);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        RoleFieldSignUp = new QComboBox(SignUpPage);
        RoleFieldSignUp->addItem(QString());
        RoleFieldSignUp->addItem(QString());
        RoleFieldSignUp->addItem(QString());
        RoleFieldSignUp->setObjectName(QString::fromUtf8("RoleFieldSignUp"));

        verticalLayout_2->addWidget(RoleFieldSignUp);

        ChildsName = new QLabel(SignUpPage);
        ChildsName->setObjectName(QString::fromUtf8("ChildsName"));

        verticalLayout_2->addWidget(ChildsName);

        ChildsNameField = new QLineEdit(SignUpPage);
        ChildsNameField->setObjectName(QString::fromUtf8("ChildsNameField"));

        verticalLayout_2->addWidget(ChildsNameField);

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
        verticalLayout_SettingsPage = new QVBoxLayout(SettingsPage);
        verticalLayout_SettingsPage->setSpacing(6);
        verticalLayout_SettingsPage->setContentsMargins(11, 11, 11, 11);
        verticalLayout_SettingsPage->setObjectName(QString::fromUtf8("verticalLayout_SettingsPage"));
        navigationBarSettings = new QFrame(SettingsPage);
        navigationBarSettings->setObjectName(QString::fromUtf8("navigationBarSettings"));
        navigationBarSettings->setMinimumSize(QSize(0, 60));
        navigationBarSettings->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_navSettings = new QHBoxLayout(navigationBarSettings);
        horizontalLayout_navSettings->setSpacing(15);
        horizontalLayout_navSettings->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_navSettings->setObjectName(QString::fromUtf8("horizontalLayout_navSettings"));
        horizontalLayout_navSettings->setContentsMargins(20, 10, 20, 10);
        MainMenuPageButtonSettings = new QPushButton(navigationBarSettings);
        MainMenuPageButtonSettings->setObjectName(QString::fromUtf8("MainMenuPageButtonSettings"));

        horizontalLayout_navSettings->addWidget(MainMenuPageButtonSettings);

        MailPageButtonSettings = new QPushButton(navigationBarSettings);
        MailPageButtonSettings->setObjectName(QString::fromUtf8("MailPageButtonSettings"));

        horizontalLayout_navSettings->addWidget(MailPageButtonSettings);

        SettingsPageButtonSettings = new QPushButton(navigationBarSettings);
        SettingsPageButtonSettings->setObjectName(QString::fromUtf8("SettingsPageButtonSettings"));

        horizontalLayout_navSettings->addWidget(SettingsPageButtonSettings);

        LogoutButtonSettings = new QPushButton(navigationBarSettings);
        LogoutButtonSettings->setObjectName(QString::fromUtf8("LogoutButtonSettings"));

        horizontalLayout_navSettings->addWidget(LogoutButtonSettings);


        verticalLayout_SettingsPage->addWidget(navigationBarSettings);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer_6 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        SettingsTitle = new QLabel(SettingsPage);
        SettingsTitle->setObjectName(QString::fromUtf8("SettingsTitle"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        SettingsTitle->setFont(font);
        SettingsTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(SettingsTitle);

        SurnameTextSettings = new QLabel(SettingsPage);
        SurnameTextSettings->setObjectName(QString::fromUtf8("SurnameTextSettings"));
        SurnameTextSettings->setMinimumSize(QSize(400, 0));

        verticalLayout_6->addWidget(SurnameTextSettings);

        SurnameFieldSettings = new QLineEdit(SettingsPage);
        SurnameFieldSettings->setObjectName(QString::fromUtf8("SurnameFieldSettings"));

        verticalLayout_6->addWidget(SurnameFieldSettings);

        NameTextSettings = new QLabel(SettingsPage);
        NameTextSettings->setObjectName(QString::fromUtf8("NameTextSettings"));

        verticalLayout_6->addWidget(NameTextSettings);

        NameFieldSettings = new QLineEdit(SettingsPage);
        NameFieldSettings->setObjectName(QString::fromUtf8("NameFieldSettings"));

        verticalLayout_6->addWidget(NameFieldSettings);

        EmailTextSettings = new QLabel(SettingsPage);
        EmailTextSettings->setObjectName(QString::fromUtf8("EmailTextSettings"));

        verticalLayout_6->addWidget(EmailTextSettings);

        EmailFieldSettings = new QLineEdit(SettingsPage);
        EmailFieldSettings->setObjectName(QString::fromUtf8("EmailFieldSettings"));

        verticalLayout_6->addWidget(EmailFieldSettings);

        DobTextSettings = new QLabel(SettingsPage);
        DobTextSettings->setObjectName(QString::fromUtf8("DobTextSettings"));

        verticalLayout_6->addWidget(DobTextSettings);

        DobFieldSettings = new QDateEdit(SettingsPage);
        DobFieldSettings->setObjectName(QString::fromUtf8("DobFieldSettings"));

        verticalLayout_6->addWidget(DobFieldSettings);

        PasswordTextSettings = new QLabel(SettingsPage);
        PasswordTextSettings->setObjectName(QString::fromUtf8("PasswordTextSettings"));

        verticalLayout_6->addWidget(PasswordTextSettings);

        PasswordFieldSettings = new QLineEdit(SettingsPage);
        PasswordFieldSettings->setObjectName(QString::fromUtf8("PasswordFieldSettings"));
        PasswordFieldSettings->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(PasswordFieldSettings);

        SaveSettingsButton = new QPushButton(SettingsPage);
        SaveSettingsButton->setObjectName(QString::fromUtf8("SaveSettingsButton"));

        verticalLayout_6->addWidget(SaveSettingsButton);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);


        horizontalLayout_2->addLayout(verticalLayout_6);

        horizontalSpacer_7 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_SettingsPage->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(SettingsPage);
        MailPage = new QWidget();
        MailPage->setObjectName(QString::fromUtf8("MailPage"));
        verticalLayout_MailPage = new QVBoxLayout(MailPage);
        verticalLayout_MailPage->setSpacing(6);
        verticalLayout_MailPage->setContentsMargins(11, 11, 11, 11);
        verticalLayout_MailPage->setObjectName(QString::fromUtf8("verticalLayout_MailPage"));
        frame = new QFrame(MailPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 60));
        frame->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_navMail = new QHBoxLayout(frame);
        horizontalLayout_navMail->setSpacing(6);
        horizontalLayout_navMail->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_navMail->setObjectName(QString::fromUtf8("horizontalLayout_navMail"));
        MainMenuPageButtonMail = new QPushButton(frame);
        MainMenuPageButtonMail->setObjectName(QString::fromUtf8("MainMenuPageButtonMail"));
        MainMenuPageButtonMail->setMinimumSize(QSize(50, 50));

        horizontalLayout_navMail->addWidget(MainMenuPageButtonMail);

        MailPageButtonMail = new QPushButton(frame);
        MailPageButtonMail->setObjectName(QString::fromUtf8("MailPageButtonMail"));
        MailPageButtonMail->setMinimumSize(QSize(50, 50));

        horizontalLayout_navMail->addWidget(MailPageButtonMail);

        SettingsPageButtonMail = new QPushButton(frame);
        SettingsPageButtonMail->setObjectName(QString::fromUtf8("SettingsPageButtonMail"));
        SettingsPageButtonMail->setMinimumSize(QSize(50, 50));

        horizontalLayout_navMail->addWidget(SettingsPageButtonMail);

        LogoutButtonMail = new QPushButton(frame);
        LogoutButtonMail->setObjectName(QString::fromUtf8("LogoutButtonMail"));
        LogoutButtonMail->setMinimumSize(QSize(50, 50));

        horizontalLayout_navMail->addWidget(LogoutButtonMail);


        verticalLayout_MailPage->addWidget(frame);

        tabWidget = new QTabWidget(MailPage);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_Inbox = new QHBoxLayout(widget);
        horizontalLayout_Inbox->setSpacing(6);
        horizontalLayout_Inbox->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_Inbox->setObjectName(QString::fromUtf8("horizontalLayout_Inbox"));
        MailInbox = new QListWidget(widget);
        MailInbox->setObjectName(QString::fromUtf8("MailInbox"));

        horizontalLayout_Inbox->addWidget(MailInbox);

        MailInboxInhoud = new QTextEdit(widget);
        MailInboxInhoud->setObjectName(QString::fromUtf8("MailInboxInhoud"));
        MailInboxInhoud->setReadOnly(true);

        horizontalLayout_Inbox->addWidget(MailInboxInhoud);

        tabWidget->addTab(widget, QString());
        widget_2 = new QWidget();
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_Sent = new QHBoxLayout(widget_2);
        horizontalLayout_Sent->setSpacing(6);
        horizontalLayout_Sent->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_Sent->setObjectName(QString::fromUtf8("horizontalLayout_Sent"));
        MailSent = new QListWidget(widget_2);
        MailSent->setObjectName(QString::fromUtf8("MailSent"));

        horizontalLayout_Sent->addWidget(MailSent);

        MailSentInhoud = new QTextEdit(widget_2);
        MailSentInhoud->setObjectName(QString::fromUtf8("MailSentInhoud"));
        MailSentInhoud->setReadOnly(true);

        horizontalLayout_Sent->addWidget(MailSentInhoud);

        tabWidget->addTab(widget_2, QString());
        widget_3 = new QWidget();
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_NewMail = new QVBoxLayout(widget_3);
        verticalLayout_NewMail->setSpacing(6);
        verticalLayout_NewMail->setContentsMargins(11, 11, 11, 11);
        verticalLayout_NewMail->setObjectName(QString::fromUtf8("verticalLayout_NewMail"));
        MailTo = new QLineEdit(widget_3);
        MailTo->setObjectName(QString::fromUtf8("MailTo"));

        verticalLayout_NewMail->addWidget(MailTo);

        MailSubject = new QLineEdit(widget_3);
        MailSubject->setObjectName(QString::fromUtf8("MailSubject"));

        verticalLayout_NewMail->addWidget(MailSubject);

        MailBody = new QTextEdit(widget_3);
        MailBody->setObjectName(QString::fromUtf8("MailBody"));

        verticalLayout_NewMail->addWidget(MailBody);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        SendMailButton = new QPushButton(widget_3);
        SendMailButton->setObjectName(QString::fromUtf8("SendMailButton"));

        horizontalLayout_5->addWidget(SendMailButton);


        verticalLayout_NewMail->addLayout(horizontalLayout_5);

        tabWidget->addTab(widget_3, QString());

        verticalLayout_MailPage->addWidget(tabWidget);

        stackedWidget->addWidget(MailPage);
        MainMenuPage = new QWidget();
        MainMenuPage->setObjectName(QString::fromUtf8("MainMenuPage"));
        verticalLayout_MainMenu = new QVBoxLayout(MainMenuPage);
        verticalLayout_MainMenu->setSpacing(6);
        verticalLayout_MainMenu->setContentsMargins(11, 11, 11, 11);
        verticalLayout_MainMenu->setObjectName(QString::fromUtf8("verticalLayout_MainMenu"));
        NavigationBarFrame = new QFrame(MainMenuPage);
        NavigationBarFrame->setObjectName(QString::fromUtf8("NavigationBarFrame"));
        NavigationBarFrame->setMinimumSize(QSize(0, 60));
        NavigationBarFrame->setMaximumSize(QSize(16777215, 60));
        NavigationBarFrame->setFrameShape(QFrame::StyledPanel);
        NavigationBarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_nav = new QHBoxLayout(NavigationBarFrame);
        horizontalLayout_nav->setSpacing(6);
        horizontalLayout_nav->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_nav->setObjectName(QString::fromUtf8("horizontalLayout_nav"));
        horizontalLayout_nav->setContentsMargins(10, 0, 10, 0);
        MainMenuPageButtonMainMenu = new QPushButton(NavigationBarFrame);
        MainMenuPageButtonMainMenu->setObjectName(QString::fromUtf8("MainMenuPageButtonMainMenu"));

        horizontalLayout_nav->addWidget(MainMenuPageButtonMainMenu);

        MailPageButtonMainMenu = new QPushButton(NavigationBarFrame);
        MailPageButtonMainMenu->setObjectName(QString::fromUtf8("MailPageButtonMainMenu"));

        horizontalLayout_nav->addWidget(MailPageButtonMainMenu);

        SettingsPageButtonMainMenu = new QPushButton(NavigationBarFrame);
        SettingsPageButtonMainMenu->setObjectName(QString::fromUtf8("SettingsPageButtonMainMenu"));

        horizontalLayout_nav->addWidget(SettingsPageButtonMainMenu);

        LogoutButtonMainMenu = new QPushButton(NavigationBarFrame);
        LogoutButtonMainMenu->setObjectName(QString::fromUtf8("LogoutButtonMainMenu"));

        horizontalLayout_nav->addWidget(LogoutButtonMainMenu);


        verticalLayout_MainMenu->addWidget(NavigationBarFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        pushButton_2 = new QPushButton(MainMenuPage);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(30, 30));
        pushButton_2->setFlat(true);

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        label_3 = new QLabel(MainMenuPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        AddSubjectButton = new QPushButton(MainMenuPage);
        AddSubjectButton->setObjectName(QString::fromUtf8("AddSubjectButton"));
        AddSubjectButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_3->addWidget(AddSubjectButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        EnrollmentListWidget = new QListWidget(MainMenuPage);
        EnrollmentListWidget->setObjectName(QString::fromUtf8("EnrollmentListWidget"));

        verticalLayout_3->addWidget(EnrollmentListWidget);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        pushButton_3 = new QPushButton(MainMenuPage);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(30, 30));
        pushButton_3->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_3);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        label_4 = new QLabel(MainMenuPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        AddAssignmentButton = new QPushButton(MainMenuPage);
        AddAssignmentButton->setObjectName(QString::fromUtf8("AddAssignmentButton"));
        AddAssignmentButton->setMaximumSize(QSize(30, 30));

        horizontalLayout_4->addWidget(AddAssignmentButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        AssignmentsTreeWidget = new QTreeWidget(MainMenuPage);
        AssignmentsTreeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        AssignmentsTreeWidget->setHeaderItem(__qtreewidgetitem);
        AssignmentsTreeWidget->setObjectName(QString::fromUtf8("AssignmentsTreeWidget"));
        AssignmentsTreeWidget->setMinimumSize(QSize(0, 0));
        AssignmentsTreeWidget->setColumnCount(3);
        AssignmentsTreeWidget->header()->setVisible(false);

        verticalLayout_4->addWidget(AssignmentsTreeWidget);

        frame_3 = new QFrame(MainMenuPage);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_2);

        label_5 = new QLabel(frame_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_7->addWidget(label_5);

        CourseInfoText = new QLabel(frame_3);
        CourseInfoText->setObjectName(QString::fromUtf8("CourseInfoText"));

        verticalLayout_7->addWidget(CourseInfoText);

        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_7->addWidget(label_7);

        AssignmentInfoText = new QLabel(frame_3);
        AssignmentInfoText->setObjectName(QString::fromUtf8("AssignmentInfoText"));

        verticalLayout_7->addWidget(AssignmentInfoText);

        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_7->addWidget(label_9);

        DescriptionText_2 = new QLabel(frame_3);
        DescriptionText_2->setObjectName(QString::fromUtf8("DescriptionText_2"));

        verticalLayout_7->addWidget(DescriptionText_2);

        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        DownloadFileButton = new QPushButton(frame_3);
        DownloadFileButton->setObjectName(QString::fromUtf8("DownloadFileButton"));

        verticalLayout_7->addWidget(DownloadFileButton);

        CloseAssignmentInfoButton = new QPushButton(frame_3);
        CloseAssignmentInfoButton->setObjectName(QString::fromUtf8("CloseAssignmentInfoButton"));

        verticalLayout_7->addWidget(CloseAssignmentInfoButton);


        verticalLayout_4->addWidget(frame_3);

        frame_2 = new QFrame(MainMenuPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        CreateAssignmentText = new QLabel(frame_2);
        CreateAssignmentText->setObjectName(QString::fromUtf8("CreateAssignmentText"));
        CreateAssignmentText->setFont(font2);
        CreateAssignmentText->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(CreateAssignmentText);

        SelectCourseText = new QLabel(frame_2);
        SelectCourseText->setObjectName(QString::fromUtf8("SelectCourseText"));

        verticalLayout_9->addWidget(SelectCourseText);

        SelectCourseComboBox = new QComboBox(frame_2);
        SelectCourseComboBox->setObjectName(QString::fromUtf8("SelectCourseComboBox"));

        verticalLayout_9->addWidget(SelectCourseComboBox);

        TitleText = new QLabel(frame_2);
        TitleText->setObjectName(QString::fromUtf8("TitleText"));

        verticalLayout_9->addWidget(TitleText);

        TitleField = new QLineEdit(frame_2);
        TitleField->setObjectName(QString::fromUtf8("TitleField"));

        verticalLayout_9->addWidget(TitleField);

        DescriptionText = new QLabel(frame_2);
        DescriptionText->setObjectName(QString::fromUtf8("DescriptionText"));

        verticalLayout_9->addWidget(DescriptionText);

        DescriptionField = new QLineEdit(frame_2);
        DescriptionField->setObjectName(QString::fromUtf8("DescriptionField"));

        verticalLayout_9->addWidget(DescriptionField);

        SelectFileText = new QLabel(frame_2);
        SelectFileText->setObjectName(QString::fromUtf8("SelectFileText"));

        verticalLayout_9->addWidget(SelectFileText);

        SelectFileButton = new QPushButton(frame_2);
        SelectFileButton->setObjectName(QString::fromUtf8("SelectFileButton"));

        verticalLayout_9->addWidget(SelectFileButton);

        CreateAssignmentButton = new QPushButton(frame_2);
        CreateAssignmentButton->setObjectName(QString::fromUtf8("CreateAssignmentButton"));
        CreateAssignmentButton->setMinimumSize(QSize(0, 50));

        verticalLayout_9->addWidget(CreateAssignmentButton);


        verticalLayout_4->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        SubmissionsText = new QLabel(MainMenuPage);
        SubmissionsText->setObjectName(QString::fromUtf8("SubmissionsText"));
        SubmissionsText->setFont(font1);
        SubmissionsText->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(SubmissionsText);

        SubmissionsTreeWidget = new QTreeWidget(MainMenuPage);
        SubmissionsTreeWidget->headerItem()->setText(0, QString());
        SubmissionsTreeWidget->setObjectName(QString::fromUtf8("SubmissionsTreeWidget"));
        SubmissionsTreeWidget->header()->setVisible(false);

        verticalLayout_5->addWidget(SubmissionsTreeWidget);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_MainMenu->addLayout(horizontalLayout);

        stackedWidget->addWidget(MainMenuPage);

        verticalLayout->addWidget(stackedWidget);

        StudentManagementClass->setCentralWidget(centralwidget);

        retranslateUi(StudentManagementClass);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


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
        label->setText(QApplication::translate("StudentManagementClass", "Role:", nullptr));
        RoleFieldSignUp->setItemText(0, QApplication::translate("StudentManagementClass", "Student", nullptr));
        RoleFieldSignUp->setItemText(1, QApplication::translate("StudentManagementClass", "Teacher", nullptr));
        RoleFieldSignUp->setItemText(2, QApplication::translate("StudentManagementClass", "Parent", nullptr));

        ChildsName->setText(QApplication::translate("StudentManagementClass", "Child's e-mail", nullptr));
        SignUpButton->setText(QApplication::translate("StudentManagementClass", "Sign up", nullptr));
        LoginPageButton->setText(QApplication::translate("StudentManagementClass", "Back to Login", nullptr));
        MainMenuPageButtonSettings->setText(QApplication::translate("StudentManagementClass", "Main Menu", nullptr));
        MailPageButtonSettings->setText(QApplication::translate("StudentManagementClass", "Mails", nullptr));
        SettingsPageButtonSettings->setText(QApplication::translate("StudentManagementClass", "Settings", nullptr));
        LogoutButtonSettings->setText(QApplication::translate("StudentManagementClass", "Log out", nullptr));
        SettingsTitle->setText(QApplication::translate("StudentManagementClass", "Account Settings", nullptr));
        SurnameTextSettings->setText(QApplication::translate("StudentManagementClass", "Surname:", nullptr));
        NameTextSettings->setText(QApplication::translate("StudentManagementClass", "Name:", nullptr));
        EmailTextSettings->setText(QApplication::translate("StudentManagementClass", "E-mail (Login):", nullptr));
        DobTextSettings->setText(QApplication::translate("StudentManagementClass", "Date of birth:", nullptr));
        PasswordTextSettings->setText(QApplication::translate("StudentManagementClass", "Change Password:", nullptr));
        SaveSettingsButton->setText(QApplication::translate("StudentManagementClass", "Save changes", nullptr));
        MainMenuPageButtonMail->setText(QApplication::translate("StudentManagementClass", "Main Menu", nullptr));
        MailPageButtonMail->setText(QApplication::translate("StudentManagementClass", "Mails", nullptr));
        SettingsPageButtonMail->setText(QApplication::translate("StudentManagementClass", "Settings", nullptr));
        LogoutButtonMail->setText(QApplication::translate("StudentManagementClass", "Log out", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("StudentManagementClass", "Inbox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("StudentManagementClass", "Sent", nullptr));
        MailTo->setPlaceholderText(QApplication::translate("StudentManagementClass", "To (Email address)...", nullptr));
        MailSubject->setPlaceholderText(QApplication::translate("StudentManagementClass", "Subject...", nullptr));
        MailBody->setPlaceholderText(QApplication::translate("StudentManagementClass", "Write your message here...", nullptr));
        SendMailButton->setText(QApplication::translate("StudentManagementClass", "Send Mail", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget_3), QApplication::translate("StudentManagementClass", "New Mail", nullptr));
        MainMenuPageButtonMainMenu->setText(QApplication::translate("StudentManagementClass", "Main Menu", nullptr));
        MailPageButtonMainMenu->setText(QApplication::translate("StudentManagementClass", "Mails", nullptr));
        SettingsPageButtonMainMenu->setText(QApplication::translate("StudentManagementClass", "Settings", nullptr));
        LogoutButtonMainMenu->setText(QApplication::translate("StudentManagementClass", "Log out", nullptr));
        pushButton_2->setText(QString());
        label_3->setText(QApplication::translate("StudentManagementClass", "Enrollment", nullptr));
        AddSubjectButton->setText(QApplication::translate("StudentManagementClass", "+", nullptr));
        pushButton_3->setText(QString());
        label_4->setText(QApplication::translate("StudentManagementClass", "Assignments", nullptr));
        AddAssignmentButton->setText(QApplication::translate("StudentManagementClass", "+", nullptr));
        label_2->setText(QApplication::translate("StudentManagementClass", "Assignment info", nullptr));
        label_5->setText(QApplication::translate("StudentManagementClass", "Course:", nullptr));
        CourseInfoText->setText(QString());
        label_7->setText(QApplication::translate("StudentManagementClass", "Assignment:", nullptr));
        AssignmentInfoText->setText(QString());
        label_9->setText(QApplication::translate("StudentManagementClass", "Description:", nullptr));
        DescriptionText_2->setText(QString());
        label_11->setText(QApplication::translate("StudentManagementClass", "Download file:", nullptr));
        DownloadFileButton->setText(QApplication::translate("StudentManagementClass", "File", nullptr));
        CloseAssignmentInfoButton->setText(QApplication::translate("StudentManagementClass", "Close assignment info", nullptr));
        CreateAssignmentText->setText(QApplication::translate("StudentManagementClass", "Create assignment", nullptr));
        SelectCourseText->setText(QApplication::translate("StudentManagementClass", "Course:", nullptr));
        TitleText->setText(QApplication::translate("StudentManagementClass", "Title:", nullptr));
        DescriptionText->setText(QApplication::translate("StudentManagementClass", "Description:", nullptr));
        SelectFileText->setText(QApplication::translate("StudentManagementClass", "Upload file:", nullptr));
        SelectFileButton->setText(QApplication::translate("StudentManagementClass", "Select file", nullptr));
        CreateAssignmentButton->setText(QApplication::translate("StudentManagementClass", "Create assignment", nullptr));
        SubmissionsText->setText(QApplication::translate("StudentManagementClass", "Submission + Grades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
