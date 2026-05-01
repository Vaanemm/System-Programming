#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentManagement.h"

class School; // useful so we can use m_currentuser in login for ex.

class StudentManagement : public QMainWindow
{
	Q_OBJECT

public:
	StudentManagement(QWidget *parent = Q_NULLPTR);

private slots:
	//LOGIN
	void handleLogin();
	void goToSignUp();

	//SIGN UP 
	void goToLogin();


	//MAIN MENU 
	void handleLogout();

	//MAIL CONNECTIONS

	//SETTINGS CONNECTIONS

private:
	Ui::StudentManagementClass ui;
};
