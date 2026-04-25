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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagementClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StudentManagementClass)
    {
        if (StudentManagementClass->objectName().isEmpty())
            StudentManagementClass->setObjectName(QString::fromUtf8("StudentManagementClass"));
        StudentManagementClass->resize(600, 400);
        menuBar = new QMenuBar(StudentManagementClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        StudentManagementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(StudentManagementClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        StudentManagementClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(StudentManagementClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        StudentManagementClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(StudentManagementClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        StudentManagementClass->setStatusBar(statusBar);

        retranslateUi(StudentManagementClass);

        QMetaObject::connectSlotsByName(StudentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *StudentManagementClass)
    {
        StudentManagementClass->setWindowTitle(QApplication::translate("StudentManagementClass", "StudentManagement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagementClass: public Ui_StudentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H
