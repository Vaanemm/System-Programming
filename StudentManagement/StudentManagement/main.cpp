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

	std::shared_ptr<User> u_ptr = std::shared_ptr<User>(new User("test@example.com", "secret", "john", "name", dob));

	std::cout << u_ptr->ToString() << std::endl;

	std::shared_ptr<Teacher> prof_ptr = std::shared_ptr<Teacher>(new Teacher("prof@example.com", "secret", "prof", "name", dob));
	//school.AddTeacher(prof);

	std::shared_ptr<Subject> physics_ptr = std::shared_ptr<Subject>(new Subject(SubjectName::Physics, prof_ptr));
	std::shared_ptr<Subject> math_ptr = std::shared_ptr<Subject>(new Subject(SubjectName::Mathematics, prof_ptr));

	std::cout << physics_ptr->ToString() << std::endl;

	std::shared_ptr<Student> stud_ptr = std::shared_ptr<Student>(new Student("student@example.com", "secret", "stud", "name", dob));
	stud_ptr->AddSubject(physics_ptr);
	stud_ptr->AddSubject(math_ptr);
	//school.AddStudent(stud);

	std::cout << stud_ptr->ToString() << std::endl;

	std::shared_ptr<Parent> par_ptr = std::shared_ptr<Parent>(new Parent("parent@example.com", "secret", "parent", "name", dob, (stud_ptr)));
	//school.AddParent(par);

	std::cout << par_ptr->ToString() << std::endl;

	std::cout << prof_ptr->ToString() << std::endl;

	physics_ptr->MakeAssignment("Sterke toets", "ja het is moeilijk he");

	std::cout << physics_ptr->SubjectAssignmentToString() << std::endl;

	w.show();
	return a.exec();

}
