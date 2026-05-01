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

	//BAR
	connect(ui.LogoutButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::handleLogout);
	connect(ui.LogoutButtonMail, &QPushButton::clicked, this, &StudentManagement::handleLogout);
	connect(ui.LogoutButtonSettings, &QPushButton::clicked, this, &StudentManagement::handleLogout);

	connect(ui.MainMenuPageButtonMail, &QPushButton::clicked, this, &StudentManagement::goToMainMenu);
	connect(ui.MainMenuPageButtonSettings, &QPushButton::clicked, this, &StudentManagement::goToMainMenu);

	connect(ui.MailPageButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::goToMail);
	connect(ui.MailPageButtonSettings, &QPushButton::clicked, this, &StudentManagement::goToMail);

	connect(ui.SettingsPageButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::goToSettings);
	connect(ui.SettingsPageButtonMail, &QPushButton::clicked, this, &StudentManagement::goToSettings);



}