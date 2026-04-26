#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentManagement.h"

class School; // useful so we can use m_currentuser in login for ex.

class StudentManagement : public QMainWindow
{
	Q_OBJECT

public:
	StudentManagement(School& _s, QWidget *parent = Q_NULLPTR); // we give the school (where we store everyone)

private slots:
	void handleLogin();
	void goToSignup();

private:
	Ui::StudentManagementClass ui;
	School& m_school;
};
