#include "student_management.h"
#include <iostream>
#include <QDebug>

StudentManagement::StudentManagement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.btnLogin, &QPushButton::clicked, this, &StudentManagement::handleLogin);
	connect(ui.btnGoToSignup, &QPushButton::clicked, this, &StudentManagement::goToSignup);
}