#include "student_management.h"
#include <iostream>
#include <QDebug>
#include <QPushButton>

StudentManagement::StudentManagement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//LOGIN SCREEN CONNCETIONS
	connect(ui.LoginButton, &QPushButton::clicked, this, &StudentManagement::handleLogin);
	connect(ui.SignUpPageButton, &QPushButton::clicked, this, &StudentManagement::goToSignUp);

	//SIGN UP CONNECTIONS
	connect(ui.LoginPageButton, &QPushButton::clicked, this, &StudentManagement::goToLogin);

	//MAIN MENU CONNECTIONS
	connect(ui.LogoutButton, &QPushButton::clicked, this, &StudentManagement::handleLogout);

	//MAIL CONNECTIONS

	//SETTINGS CONNECTIONS
}