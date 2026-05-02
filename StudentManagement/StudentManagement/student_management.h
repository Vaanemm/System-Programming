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
	void GoToSignUp();

	//SIGN UP 
	void GoToLogin();
	void SignUp();
	void ShowChildSignUp();

	//BAR 
	void handleLogout();
	void goToMainMenu();
	void goToSettings();
	void goToMail();

	//MAIN WINDOW	
	void AddSubject();


private:
	Ui::StudentManagementClass ui;
};