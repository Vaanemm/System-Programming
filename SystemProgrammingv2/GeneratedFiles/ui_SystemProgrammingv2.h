/********************************************************************************
** Form generated from reading UI file 'SystemProgrammingv2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMPROGRAMMINGV2_H
#define UI_SYSTEMPROGRAMMINGV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemProgrammingv2Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *EnterMail;
    QLineEdit *username;
    QLabel *EnterPassword;
    QLineEdit *password;
    QPushButton *btnLogin;
    QWidget *page_2;
    QGroupBox *groupBox_2;
    QLabel *lblStatus;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SystemProgrammingv2Class)
    {
        if (SystemProgrammingv2Class->objectName().isEmpty())
            SystemProgrammingv2Class->setObjectName(QString::fromUtf8("SystemProgrammingv2Class"));
        SystemProgrammingv2Class->resize(600, 400);
        centralWidget = new QWidget(SystemProgrammingv2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 200));
        groupBox->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        EnterMail = new QLabel(groupBox);
        EnterMail->setObjectName(QString::fromUtf8("EnterMail"));
        EnterMail->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        EnterMail->setFont(font);

        verticalLayout->addWidget(EnterMail);

        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));

        verticalLayout->addWidget(username);

        EnterPassword = new QLabel(groupBox);
        EnterPassword->setObjectName(QString::fromUtf8("EnterPassword"));
        EnterPassword->setMaximumSize(QSize(16777215, 30));
        EnterPassword->setFont(font);

        verticalLayout->addWidget(EnterPassword);

        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));

        verticalLayout->addWidget(password);

        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setIconSize(QSize(25, 16));

        verticalLayout->addWidget(btnLogin);


        verticalLayout_2->addLayout(verticalLayout);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 500, 300));
        groupBox_2->setMinimumSize(QSize(300, 0));
        lblStatus = new QLabel(groupBox_2);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(0, 0, 500, 300));
        QFont font1;
        font1.setPointSize(9);
        lblStatus->setFont(font1);
        lblStatus->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 1, 2, 1, 1);

        SystemProgrammingv2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SystemProgrammingv2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        SystemProgrammingv2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SystemProgrammingv2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SystemProgrammingv2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SystemProgrammingv2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SystemProgrammingv2Class->setStatusBar(statusBar);

        retranslateUi(SystemProgrammingv2Class);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SystemProgrammingv2Class);
    } // setupUi

    void retranslateUi(QMainWindow *SystemProgrammingv2Class)
    {
        SystemProgrammingv2Class->setWindowTitle(QApplication::translate("SystemProgrammingv2Class", "SystemProgrammingv2", nullptr));
        groupBox->setTitle(QString());
        EnterMail->setText(QApplication::translate("SystemProgrammingv2Class", "Please enter your e-mail:", nullptr));
        EnterPassword->setText(QApplication::translate("SystemProgrammingv2Class", "Please enter your password:", nullptr));
        btnLogin->setText(QApplication::translate("SystemProgrammingv2Class", "Confirm", nullptr));
        groupBox_2->setTitle(QString());
        lblStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemProgrammingv2Class: public Ui_SystemProgrammingv2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMPROGRAMMINGV2_H
