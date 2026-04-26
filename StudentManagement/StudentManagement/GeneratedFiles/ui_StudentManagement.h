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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagementClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *Login;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *EnterMail;
    QLineEdit *_mail;
    QLabel *EnterPassword;
    QLineEdit *_password;
    QPushButton *btnLogin;
    QPushButton *btnGoToSignup;
    QWidget *Enrollment;
    QFormLayout *formLayout_4;
    QPushButton *btnBackToMain;
    QLabel *label_4;
    QScrollArea *enrollmentLayout;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *pageSignup;
    QGridLayout *gridLayout_4;
    QPushButton *btnSignupBackToLogin;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout;
    QLabel *regemailenter;
    QLineEdit *regemail;
    QLabel *regnameenter;
    QLineEdit *regname;
    QLabel *regsurnameenter;
    QLineEdit *regsurname;
    QLabel *regpasswordenter;
    QLineEdit *regpassword;
    QLabel *regdobenter;
    QDateEdit *regdate;
    QLabel *label;
    QComboBox *regrole;
    QPushButton *btnCreateAccount;
    QLabel *txtRegisterChilEmail;
    QLineEdit *regChildEmail;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QWidget *Info;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnInfoGoToEdit;
    QPushButton *btnInfoBackToLogin;
    QPushButton *btnInfoCreateAssignment;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeAssignments;
    QPushButton *btnToEnrollment;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnGoToMail;
    QSpacerItem *horizontalSpacer_2;
    QWidget *assignmentFrame;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboTeacherSubjects;
    QLineEdit *editAssignTitle;
    QTextEdit *editAssignDesc;
    QDateEdit *dateAssignDue;
    QPushButton *btnCreateAssignment;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QPushButton *btnInfoCancelAssignment;
    QWidget *EditAccount;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnEditGoToLogin;
    QPushButton *btnEditDelete;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *editemail;
    QLabel *label_3;
    QLineEdit *editpassword;
    QLabel *label_6;
    QDateEdit *editdob;
    QPushButton *btnEditConfirm;
    QWidget *MailDashboard;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnGoBack;
    QTabWidget *tabWidget;
    QWidget *Inbox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *listInbox;
    QTextEdit *txtInbox;
    QSpacerItem *verticalSpacer_14;
    QSpacerItem *horizontalSpacer_15;
    QWidget *Sent;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *horizontalLayout_5;
    QListWidget *listSent;
    QTextEdit *txtSent;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QWidget *NewMail;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_9;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *mailTo;
    QLineEdit *mailSubject;
    QTextEdit *mailBody;
    QPushButton *btnSendMail;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QWidget *editGrade;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblGradeSubject;
    QLabel *lblGradeTitle;
    QPushButton *btnGradeBackToMain;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblGradeDescription;
    QLabel *lblGradeDueDate;
    QListWidget *lstStudentGrades;
    QPushButton *btnUpdateGrades;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StudentManagementClass)
    {
        if (StudentManagementClass->objectName().isEmpty())
            StudentManagementClass->setObjectName(QString::fromUtf8("StudentManagementClass"));
        StudentManagementClass->resize(2000, 1400);
        centralWidget = new QWidget(StudentManagementClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        Login = new QWidget();
        Login->setObjectName(QString::fromUtf8("Login"));
        gridLayout = new QGridLayout(Login);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(500, 200));
        groupBox->setMaximumSize(QSize(400, 16777215));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        EnterMail = new QLabel(groupBox);
        EnterMail->setObjectName(QString::fromUtf8("EnterMail"));
        EnterMail->setMinimumSize(QSize(400, 0));
        EnterMail->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        EnterMail->setFont(font1);

        verticalLayout->addWidget(EnterMail);

        _mail = new QLineEdit(groupBox);
        _mail->setObjectName(QString::fromUtf8("_mail"));
        _mail->setMinimumSize(QSize(400, 40));
        QFont font2;
        font2.setPointSize(12);
        _mail->setFont(font2);

        verticalLayout->addWidget(_mail);

        EnterPassword = new QLabel(groupBox);
        EnterPassword->setObjectName(QString::fromUtf8("EnterPassword"));
        EnterPassword->setMinimumSize(QSize(400, 40));
        EnterPassword->setMaximumSize(QSize(16777215, 30));
        EnterPassword->setFont(font1);

        verticalLayout->addWidget(EnterPassword);

        _password = new QLineEdit(groupBox);
        _password->setObjectName(QString::fromUtf8("_password"));
        _password->setMinimumSize(QSize(400, 40));
        _password->setFont(font2);

        verticalLayout->addWidget(_password);

        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(400, 0));
        btnLogin->setIconSize(QSize(25, 16));

        verticalLayout->addWidget(btnLogin);

        btnGoToSignup = new QPushButton(groupBox);
        btnGoToSignup->setObjectName(QString::fromUtf8("btnGoToSignup"));
        btnGoToSignup->setMinimumSize(QSize(400, 40));

        verticalLayout->addWidget(btnGoToSignup);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(Login);
        Enrollment = new QWidget();
        Enrollment->setObjectName(QString::fromUtf8("Enrollment"));
        Enrollment->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QScrollArea {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        formLayout_4 = new QFormLayout(Enrollment);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        btnBackToMain = new QPushButton(Enrollment);
        btnBackToMain->setObjectName(QString::fromUtf8("btnBackToMain"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, btnBackToMain);

        label_4 = new QLabel(Enrollment);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, label_4);

        enrollmentLayout = new QScrollArea(Enrollment);
        enrollmentLayout->setObjectName(QString::fromUtf8("enrollmentLayout"));
        enrollmentLayout->setMinimumSize(QSize(1100, 1200));
        enrollmentLayout->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1092, 1192));
        enrollmentLayout->setWidget(scrollAreaWidgetContents_2);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, enrollmentLayout);

        stackedWidget->addWidget(Enrollment);
        pageSignup = new QWidget();
        pageSignup->setObjectName(QString::fromUtf8("pageSignup"));
        pageSignup->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        gridLayout_4 = new QGridLayout(pageSignup);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        btnSignupBackToLogin = new QPushButton(pageSignup);
        btnSignupBackToLogin->setObjectName(QString::fromUtf8("btnSignupBackToLogin"));
        btnSignupBackToLogin->setMinimumSize(QSize(0, 40));

        gridLayout_4->addWidget(btnSignupBackToLogin, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(pageSignup);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        formLayout = new QFormLayout(groupBox_3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(15);
        regemailenter = new QLabel(groupBox_3);
        regemailenter->setObjectName(QString::fromUtf8("regemailenter"));

        formLayout->setWidget(0, QFormLayout::LabelRole, regemailenter);

        regemail = new QLineEdit(groupBox_3);
        regemail->setObjectName(QString::fromUtf8("regemail"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, regemail);

        regnameenter = new QLabel(groupBox_3);
        regnameenter->setObjectName(QString::fromUtf8("regnameenter"));

        formLayout->setWidget(2, QFormLayout::LabelRole, regnameenter);

        regname = new QLineEdit(groupBox_3);
        regname->setObjectName(QString::fromUtf8("regname"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, regname);

        regsurnameenter = new QLabel(groupBox_3);
        regsurnameenter->setObjectName(QString::fromUtf8("regsurnameenter"));

        formLayout->setWidget(4, QFormLayout::LabelRole, regsurnameenter);

        regsurname = new QLineEdit(groupBox_3);
        regsurname->setObjectName(QString::fromUtf8("regsurname"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, regsurname);

        regpasswordenter = new QLabel(groupBox_3);
        regpasswordenter->setObjectName(QString::fromUtf8("regpasswordenter"));

        formLayout->setWidget(6, QFormLayout::LabelRole, regpasswordenter);

        regpassword = new QLineEdit(groupBox_3);
        regpassword->setObjectName(QString::fromUtf8("regpassword"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, regpassword);

        regdobenter = new QLabel(groupBox_3);
        regdobenter->setObjectName(QString::fromUtf8("regdobenter"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, regdobenter);

        regdate = new QDateEdit(groupBox_3);
        regdate->setObjectName(QString::fromUtf8("regdate"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, regdate);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label);

        regrole = new QComboBox(groupBox_3);
        regrole->addItem(QString());
        regrole->addItem(QString());
        regrole->addItem(QString());
        regrole->setObjectName(QString::fromUtf8("regrole"));

        formLayout->setWidget(11, QFormLayout::LabelRole, regrole);

        btnCreateAccount = new QPushButton(groupBox_3);
        btnCreateAccount->setObjectName(QString::fromUtf8("btnCreateAccount"));

        formLayout->setWidget(14, QFormLayout::LabelRole, btnCreateAccount);

        txtRegisterChilEmail = new QLabel(groupBox_3);
        txtRegisterChilEmail->setObjectName(QString::fromUtf8("txtRegisterChilEmail"));
        txtRegisterChilEmail->setEnabled(true);

        formLayout->setWidget(12, QFormLayout::LabelRole, txtRegisterChilEmail);

        regChildEmail = new QLineEdit(groupBox_3);
        regChildEmail->setObjectName(QString::fromUtf8("regChildEmail"));
        regChildEmail->setEnabled(true);
        regChildEmail->setAutoFillBackground(false);

        formLayout->setWidget(13, QFormLayout::LabelRole, regChildEmail);


        gridLayout_4->addWidget(groupBox_3, 1, 1, 2, 1);

        horizontalSpacer_4 = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 117, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 3, 1, 1, 1);

        stackedWidget->addWidget(pageSignup);
        Info = new QWidget();
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	min-height: 40px;\n"
"}"));
        gridLayout_9 = new QGridLayout(Info);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 118, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 2, 1, 1);

        btnInfoGoToEdit = new QPushButton(Info);
        btnInfoGoToEdit->setObjectName(QString::fromUtf8("btnInfoGoToEdit"));

        gridLayout_2->addWidget(btnInfoGoToEdit, 1, 3, 1, 1);

        btnInfoBackToLogin = new QPushButton(Info);
        btnInfoBackToLogin->setObjectName(QString::fromUtf8("btnInfoBackToLogin"));

        gridLayout_2->addWidget(btnInfoBackToLogin, 1, 0, 1, 1);

        btnInfoCreateAssignment = new QPushButton(Info);
        btnInfoCreateAssignment->setObjectName(QString::fromUtf8("btnInfoCreateAssignment"));

        gridLayout_2->addWidget(btnInfoCreateAssignment, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(Info);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setMinimumSize(QSize(600, 350));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeAssignments = new QTreeWidget(groupBox_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeAssignments->setHeaderItem(__qtreewidgetitem);
        treeAssignments->setObjectName(QString::fromUtf8("treeAssignments"));

        horizontalLayout->addWidget(treeAssignments);


        gridLayout_2->addWidget(groupBox_2, 3, 2, 1, 1);

        btnToEnrollment = new QPushButton(Info);
        btnToEnrollment->setObjectName(QString::fromUtf8("btnToEnrollment"));

        gridLayout_2->addWidget(btnToEnrollment, 4, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        btnGoToMail = new QPushButton(Info);
        btnGoToMail->setObjectName(QString::fromUtf8("btnGoToMail"));

        gridLayout_2->addWidget(btnGoToMail, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 3, 1, 1);


        gridLayout_9->addLayout(gridLayout_2, 0, 0, 2, 2);

        assignmentFrame = new QWidget(Info);
        assignmentFrame->setObjectName(QString::fromUtf8("assignmentFrame"));
        assignmentFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);\n"
"border: 2px solid black;\n"
"QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        gridLayout_3 = new QGridLayout(assignmentFrame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_8, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(189, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboTeacherSubjects = new QComboBox(assignmentFrame);
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->addItem(QString());
        comboTeacherSubjects->setObjectName(QString::fromUtf8("comboTeacherSubjects"));
        comboTeacherSubjects->setMinimumSize(QSize(0, 40));
        comboTeacherSubjects->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));

        verticalLayout_3->addWidget(comboTeacherSubjects);

        editAssignTitle = new QLineEdit(assignmentFrame);
        editAssignTitle->setObjectName(QString::fromUtf8("editAssignTitle"));
        editAssignTitle->setMinimumSize(QSize(0, 40));
        editAssignTitle->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));

        verticalLayout_3->addWidget(editAssignTitle);

        editAssignDesc = new QTextEdit(assignmentFrame);
        editAssignDesc->setObjectName(QString::fromUtf8("editAssignDesc"));
        editAssignDesc->setMinimumSize(QSize(0, 40));
        editAssignDesc->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));

        verticalLayout_3->addWidget(editAssignDesc);

        dateAssignDue = new QDateEdit(assignmentFrame);
        dateAssignDue->setObjectName(QString::fromUtf8("dateAssignDue"));
        dateAssignDue->setMinimumSize(QSize(0, 40));
        dateAssignDue->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));
        dateAssignDue->setCalendarPopup(true);

        verticalLayout_3->addWidget(dateAssignDue);

        btnCreateAssignment = new QPushButton(assignmentFrame);
        btnCreateAssignment->setObjectName(QString::fromUtf8("btnCreateAssignment"));
        btnCreateAssignment->setMinimumSize(QSize(0, 42));
        btnCreateAssignment->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));

        verticalLayout_3->addWidget(btnCreateAssignment);


        gridLayout_3->addLayout(verticalLayout_3, 1, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_7, 2, 1, 1, 1);

        btnInfoCancelAssignment = new QPushButton(assignmentFrame);
        btnInfoCancelAssignment->setObjectName(QString::fromUtf8("btnInfoCancelAssignment"));
        btnInfoCancelAssignment->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 1px solid gray"));

        gridLayout_3->addWidget(btnInfoCancelAssignment, 0, 0, 1, 1);


        gridLayout_9->addWidget(assignmentFrame, 1, 1, 1, 1);

        stackedWidget->addWidget(Info);
        EditAccount = new QWidget();
        EditAccount->setObjectName(QString::fromUtf8("EditAccount"));
        EditAccount->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        gridLayout_5 = new QGridLayout(EditAccount);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        btnEditGoToLogin = new QPushButton(EditAccount);
        btnEditGoToLogin->setObjectName(QString::fromUtf8("btnEditGoToLogin"));
        btnEditGoToLogin->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(btnEditGoToLogin, 1, 0, 1, 1);

        btnEditDelete = new QPushButton(EditAccount);
        btnEditDelete->setObjectName(QString::fromUtf8("btnEditDelete"));
        btnEditDelete->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(btnEditDelete, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 186, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 4, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(314, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 3, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 186, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(EditAccount);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout_2 = new QFormLayout(groupBox_4);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setVerticalSpacing(20);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        editemail = new QLineEdit(groupBox_4);
        editemail->setObjectName(QString::fromUtf8("editemail"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, editemail);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        editpassword = new QLineEdit(groupBox_4);
        editpassword->setObjectName(QString::fromUtf8("editpassword"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, editpassword);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        editdob = new QDateEdit(groupBox_4);
        editdob->setObjectName(QString::fromUtf8("editdob"));
        editdob->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, editdob);

        btnEditConfirm = new QPushButton(groupBox_4);
        btnEditConfirm->setObjectName(QString::fromUtf8("btnEditConfirm"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, btnEditConfirm);


        gridLayout_5->addWidget(groupBox_4, 2, 1, 2, 1);

        stackedWidget->addWidget(EditAccount);
        MailDashboard = new QWidget();
        MailDashboard->setObjectName(QString::fromUtf8("MailDashboard"));
        MailDashboard->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QTextEdit {\n"
"	font=size: 25px;\n"
"}\n"
"\n"
"QScrollArea {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        gridLayout_8 = new QGridLayout(MailDashboard);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        btnGoBack = new QPushButton(MailDashboard);
        btnGoBack->setObjectName(QString::fromUtf8("btnGoBack"));

        gridLayout_11->addWidget(btnGoBack, 0, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_11, 0, 0, 1, 1);

        tabWidget = new QTabWidget(MailDashboard);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Inbox = new QWidget();
        Inbox->setObjectName(QString::fromUtf8("Inbox"));
        horizontalLayout_8 = new QHBoxLayout(Inbox);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_14 = new QSpacerItem(256, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_13);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        listInbox = new QListWidget(Inbox);
        listInbox->setObjectName(QString::fromUtf8("listInbox"));
        listInbox->setMinimumSize(QSize(700, 0));

        horizontalLayout_6->addWidget(listInbox);

        txtInbox = new QTextEdit(Inbox);
        txtInbox->setObjectName(QString::fromUtf8("txtInbox"));
        txtInbox->setMinimumSize(QSize(700, 800));
        txtInbox->setReadOnly(true);

        horizontalLayout_6->addWidget(txtInbox);


        verticalLayout_8->addLayout(horizontalLayout_6);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_14);


        horizontalLayout_8->addLayout(verticalLayout_8);

        horizontalSpacer_15 = new QSpacerItem(256, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        tabWidget->addTab(Inbox, QString());
        Sent = new QWidget();
        Sent->setObjectName(QString::fromUtf8("Sent"));
        horizontalLayout_7 = new QHBoxLayout(Sent);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_12 = new QSpacerItem(256, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        listSent = new QListWidget(Sent);
        listSent->setObjectName(QString::fromUtf8("listSent"));
        listSent->setMinimumSize(QSize(700, 800));

        horizontalLayout_5->addWidget(listSent);

        txtSent = new QTextEdit(Sent);
        txtSent->setObjectName(QString::fromUtf8("txtSent"));
        txtSent->setMinimumSize(QSize(700, 0));
        txtSent->setReadOnly(true);

        horizontalLayout_5->addWidget(txtSent);


        verticalLayout_7->addLayout(horizontalLayout_5);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_12);


        horizontalLayout_7->addLayout(verticalLayout_7);

        horizontalSpacer_13 = new QSpacerItem(256, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        tabWidget->addTab(Sent, QString());
        NewMail = new QWidget();
        NewMail->setObjectName(QString::fromUtf8("NewMail"));
        horizontalLayout_4 = new QHBoxLayout(NewMail);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_10 = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        mailTo = new QLineEdit(NewMail);
        mailTo->setObjectName(QString::fromUtf8("mailTo"));
        mailTo->setMinimumSize(QSize(0, 80));

        verticalLayout_6->addWidget(mailTo);

        mailSubject = new QLineEdit(NewMail);
        mailSubject->setObjectName(QString::fromUtf8("mailSubject"));
        mailSubject->setMinimumSize(QSize(0, 80));

        verticalLayout_6->addWidget(mailSubject);

        mailBody = new QTextEdit(NewMail);
        mailBody->setObjectName(QString::fromUtf8("mailBody"));
        mailBody->setMinimumSize(QSize(0, 600));

        verticalLayout_6->addWidget(mailBody);

        btnSendMail = new QPushButton(NewMail);
        btnSendMail->setObjectName(QString::fromUtf8("btnSendMail"));
        btnSendMail->setMinimumSize(QSize(1400, 0));

        verticalLayout_6->addWidget(btnSendMail);


        verticalLayout_5->addLayout(verticalLayout_6);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalSpacer_11 = new QSpacerItem(259, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);

        tabWidget->addTab(NewMail, QString());

        gridLayout_10->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_10, 0, 0, 1, 1);

        stackedWidget->addWidget(MailDashboard);
        editGrade = new QWidget();
        editGrade->setObjectName(QString::fromUtf8("editGrade"));
        editGrade->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QScrollArea {\n"
"	border: 4px solid gray;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        gridLayout_7 = new QGridLayout(editGrade);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblGradeSubject = new QLabel(editGrade);
        lblGradeSubject->setObjectName(QString::fromUtf8("lblGradeSubject"));

        horizontalLayout_2->addWidget(lblGradeSubject);

        lblGradeTitle = new QLabel(editGrade);
        lblGradeTitle->setObjectName(QString::fromUtf8("lblGradeTitle"));

        horizontalLayout_2->addWidget(lblGradeTitle);

        btnGradeBackToMain = new QPushButton(editGrade);
        btnGradeBackToMain->setObjectName(QString::fromUtf8("btnGradeBackToMain"));

        horizontalLayout_2->addWidget(btnGradeBackToMain);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblGradeDescription = new QLabel(editGrade);
        lblGradeDescription->setObjectName(QString::fromUtf8("lblGradeDescription"));

        horizontalLayout_3->addWidget(lblGradeDescription);

        lblGradeDueDate = new QLabel(editGrade);
        lblGradeDueDate->setObjectName(QString::fromUtf8("lblGradeDueDate"));

        horizontalLayout_3->addWidget(lblGradeDueDate);


        verticalLayout_4->addLayout(horizontalLayout_3);

        lstStudentGrades = new QListWidget(editGrade);
        lstStudentGrades->setObjectName(QString::fromUtf8("lstStudentGrades"));

        verticalLayout_4->addWidget(lstStudentGrades);

        btnUpdateGrades = new QPushButton(editGrade);
        btnUpdateGrades->setObjectName(QString::fromUtf8("btnUpdateGrades"));

        verticalLayout_4->addWidget(btnUpdateGrades);


        gridLayout_7->addLayout(verticalLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(editGrade);

        gridLayout_6->addWidget(stackedWidget, 0, 0, 1, 1);

        StudentManagementClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(StudentManagementClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2000, 21));
        StudentManagementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StudentManagementClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        StudentManagementClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StudentManagementClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        StudentManagementClass->setStatusBar(statusBar);

        retranslateUi(StudentManagementClass);

        stackedWidget->setCurrentIndex(0);
        comboTeacherSubjects->setCurrentIndex(5);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StudentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManagementClass)
    {
        StudentManagementClass->setWindowTitle(QApplication::translate("StudentManagementClass", "SystemProgrammingv2", nullptr));
        groupBox->setTitle(QString());
        EnterMail->setText(QApplication::translate("StudentManagementClass", "Please enter your e-mail:", nullptr));
        EnterPassword->setText(QApplication::translate("StudentManagementClass", "Please enter your password:", nullptr));
        btnLogin->setText(QApplication::translate("StudentManagementClass", "Sign In", nullptr));
        btnGoToSignup->setText(QApplication::translate("StudentManagementClass", "No Account? Sign up here!", nullptr));
        btnBackToMain->setText(QApplication::translate("StudentManagementClass", "Back", nullptr));
        label_4->setText(QApplication::translate("StudentManagementClass", "ENROLLMENT", nullptr));
        btnSignupBackToLogin->setText(QApplication::translate("StudentManagementClass", "Back to login", nullptr));
        groupBox_3->setTitle(QString());
        regemailenter->setText(QApplication::translate("StudentManagementClass", "email", nullptr));
        regnameenter->setText(QApplication::translate("StudentManagementClass", "name", nullptr));
        regsurnameenter->setText(QApplication::translate("StudentManagementClass", "surname", nullptr));
        regpasswordenter->setText(QApplication::translate("StudentManagementClass", "password", nullptr));
        regdobenter->setText(QApplication::translate("StudentManagementClass", "date of birth", nullptr));
        label->setText(QApplication::translate("StudentManagementClass", "role", nullptr));
        regrole->setItemText(0, QApplication::translate("StudentManagementClass", "Leerling", nullptr));
        regrole->setItemText(1, QApplication::translate("StudentManagementClass", "Leerkracht", nullptr));
        regrole->setItemText(2, QApplication::translate("StudentManagementClass", "Ouder", nullptr));

        btnCreateAccount->setText(QApplication::translate("StudentManagementClass", "Submit", nullptr));
        txtRegisterChilEmail->setText(QApplication::translate("StudentManagementClass", "Email child", nullptr));
        btnInfoGoToEdit->setText(QApplication::translate("StudentManagementClass", "Edit your account", nullptr));
        btnInfoBackToLogin->setText(QApplication::translate("StudentManagementClass", "Sign Out", nullptr));
        btnInfoCreateAssignment->setText(QApplication::translate("StudentManagementClass", "Create an Assigment", nullptr));
        groupBox_2->setTitle(QString());
        btnToEnrollment->setText(QApplication::translate("StudentManagementClass", "Select courses", nullptr));
        btnGoToMail->setText(QApplication::translate("StudentManagementClass", "Mail", nullptr));
        comboTeacherSubjects->setItemText(0, QApplication::translate("StudentManagementClass", "Wiskunde", nullptr));
        comboTeacherSubjects->setItemText(1, QApplication::translate("StudentManagementClass", "Biologie", nullptr));
        comboTeacherSubjects->setItemText(2, QApplication::translate("StudentManagementClass", "Chemie", nullptr));
        comboTeacherSubjects->setItemText(3, QApplication::translate("StudentManagementClass", "Fysica", nullptr));
        comboTeacherSubjects->setItemText(4, QApplication::translate("StudentManagementClass", "Nederlands", nullptr));
        comboTeacherSubjects->setItemText(5, QApplication::translate("StudentManagementClass", "Lichaamlijke Opvoeding", nullptr));

        btnCreateAssignment->setText(QApplication::translate("StudentManagementClass", "Post Assignment", nullptr));
        btnInfoCancelAssignment->setText(QApplication::translate("StudentManagementClass", "Cancel", nullptr));
        btnEditGoToLogin->setText(QApplication::translate("StudentManagementClass", "Cancel", nullptr));
        btnEditDelete->setText(QApplication::translate("StudentManagementClass", "Delete Account", nullptr));
        groupBox_4->setTitle(QString());
        label_2->setText(QApplication::translate("StudentManagementClass", "edit email", nullptr));
        label_3->setText(QApplication::translate("StudentManagementClass", "edit password", nullptr));
        label_6->setText(QApplication::translate("StudentManagementClass", "edit date of birth", nullptr));
        btnEditConfirm->setText(QApplication::translate("StudentManagementClass", "Confirm changes", nullptr));
        btnGoBack->setText(QApplication::translate("StudentManagementClass", "Back", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Inbox), QApplication::translate("StudentManagementClass", "Inbox", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Sent), QApplication::translate("StudentManagementClass", "Sent", nullptr));
        btnSendMail->setText(QApplication::translate("StudentManagementClass", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(NewMail), QApplication::translate("StudentManagementClass", "New Mail", nullptr));
        lblGradeSubject->setText(QApplication::translate("StudentManagementClass", "TextLabel", nullptr));
        lblGradeTitle->setText(QApplication::translate("StudentManagementClass", "TextLabel", nullptr));
        btnGradeBackToMain->setText(QApplication::translate("StudentManagementClass", "Back", nullptr));
        lblGradeDescription->setText(QApplication::translate("StudentManagementClass", "TextLabel", nullptr));
        lblGradeDueDate->setText(QApplication::translate("StudentManagementClass", "TextLabel", nullptr));
        btnUpdateGrades->setText(QApplication::translate("StudentManagementClass", "Update Grades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
