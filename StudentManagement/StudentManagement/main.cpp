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

	std::unique_ptr<Teacher> prof_ptr = std::unique_ptr<Teacher>(new Teacher("prof@example.com", "secret", "prof", "name", dob));
	//school.AddTeacher(prof);

	std::unique_ptr<Subject> physics_ptr = std::unique_ptr<Subject>(new Subject(SubjectName::Physics, std::move(prof_ptr)));
	std::unique_ptr<Subject> math_ptr = std::unique_ptr<Subject>(new Subject(SubjectName::Mathematics, std::move(prof_ptr)));

	std::cout << physics_ptr->ToString() << std::endl;

	std::unique_ptr<Student> stud_ptr = std::unique_ptr<Student>(new Student("student@example.com", "secret", "stud", "name", dob));
	stud_ptr->AddSubject(std::move(physics_ptr));
	stud_ptr->AddSubject(std::move(math_ptr));
	//school.AddStudent(stud);

	std::cout << stud_ptr->ToString() << std::endl;

	Parent par("parent@example.com", "secret", "parent", "name", dob, std::move(stud_ptr));
	//school.AddParent(par);

	std::cout << par.ToString() << std::endl;

	std::cout << prof_ptr->ToString() << std::endl;

	Assignment assi("Sterke toets", "ja het is moeilijk he", std::move(physics_ptr));

	std::cout << assi.ToString() << std::endl;

	w.show();
	return a.exec();

}
