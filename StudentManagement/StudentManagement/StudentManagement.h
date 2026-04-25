#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentManagement.h"

class StudentManagement : public QMainWindow
{
	Q_OBJECT

public:
	StudentManagement(QWidget *parent = Q_NULLPTR);

private:
	Ui::StudentManagementClass ui;
};
