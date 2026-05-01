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
	void handleLogin();
	void goToSignup();

private:
	Ui::StudentManagementClass ui;
};
