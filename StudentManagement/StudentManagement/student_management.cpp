#include "student_management.h"
#include <iostream>
#include <QDebug>
#include <QPushButton>

StudentManagement::StudentManagement(School& _s, QWidget *parent)
	: QMainWindow(parent), m_school(_s)
{
	ui.setupUi(this);

	connect(ui.btnLogin, &QPushButton::clicked, this, &StudentManagement::handleLogin);
	connect(ui.btnGoToSignup, &QPushButton::clicked, this, &StudentManagement::goToSignup);
}