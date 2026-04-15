#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SystemProgrammingv2.h"
#include <string>
#include <map> 
#include <vector>

class Student;
class Teacher;
class Subject;

class SystemProgrammingv2 : public QMainWindow {
	Q_OBJECT

public:
	SystemProgrammingv2(QWidget *parent = nullptr);

private slots:
	void on_btnLogin_clicked();

private:
	Ui::SystemProgrammingv2Class ui;

	std::map<std::string, Student*> studentenLijst;
	std::map<std::string, Teacher*> leerkrachtenLijst;
	
	std::vector<Subject*> alleVakkenLijst;
};