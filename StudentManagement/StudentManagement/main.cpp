#include "student_management.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <QDebug>
#include "User.h"
#include "student.h"
#include "subjects.h"



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StudentManagement w;
	w.show();
	std::cout << "Hello World" << std::endl;
	qDebug() << "Hello World";

	Date dob;
	dob.day = 15;
	dob.month = 6;
	dob.year = 2000;

	User u("test@example.com", "secret", "john", "name", dob);

	std::cout << u.ToString() << std::endl;

	Teacher prof("prof@example.com", "secret", "prof", "name", dob);

	Subject physics(SubjectName::Physics, &prof);

	std::cout << physics.ToString() << std::endl;

	return a.exec();

}
