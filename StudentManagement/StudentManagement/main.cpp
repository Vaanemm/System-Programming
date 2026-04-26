#include "student_management.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <QDebug>
#include "user.h"
#include "student.h"
#include "subjects.h"
#include "parent.h"
#include "assignment.h"
#include "school.h"



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	School school;

	StudentManagement w(school);
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
	school.AddTeacher(prof);

	Subject physics(SubjectName::Physics, &prof);
	Subject math(SubjectName::Mathematics, &prof);

	std::cout << physics.ToString() << std::endl;

	Student stud("student@example.com", "secret", "stud", "name", dob);
	stud.AddSubject(&physics);
	stud.AddSubject(&math);
	school.AddStudent(stud);

	std::cout << stud.ToString() << std::endl;

	Parent par("parent@example.com", "secret", "parent", "name", dob, &stud);
	school.AddParent(par);

	std::cout << par.ToString() << std::endl;

	std::cout << prof.ToString() << std::endl;

	Assignment assi("Sterke toets", "ja het is moeilijk he", &physics);

	std::cout << assi.ToString() << std::endl;

	w.show();
	return a.exec();

}
