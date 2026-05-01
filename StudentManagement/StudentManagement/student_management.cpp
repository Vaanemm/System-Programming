#include "student_management.h"
#include <iostream>
#include <QDebug>
#include <QPushButton>

StudentManagement::StudentManagement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.LoginButton, &QPushButton::clicked, this, &StudentManagement::GoToMain);
	connect(ui.SignUpPageButton, &QPushButton::clicked, this, &StudentManagement::goToSignup);
}