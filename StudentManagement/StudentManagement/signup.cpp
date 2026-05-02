#include "student_management.h"
#include "date.h"
#include "student.h"
#include "database.h"
#include <iostream>
#include "parent.h"

void StudentManagement::GoToLogin() {
	ui.stackedWidget->setCurrentWidget(ui.LoginPage);
}

void StudentManagement::SignUp() {
	QString qstring_surname = ui.SurnameField->text();
	QString qstring_name = ui.NameField->text();
	QString qstring_email = ui.EmailField->text();
	QString qstring_password = ui.PasswordFieldSignUp->text();
	QDate dob_qdate = ui.DobField->date();
	Date dob = Date(dob_qdate);
	QString role = ui.RoleFieldSignUp->currentText(); // kijkt wat er op combo staat 
	QString qstring_child = ui.ChildsNameField->text();

	std::string surname = qstring_surname.toStdString();
	std::string name = qstring_name.toStdString();
	std::string email = qstring_email.toStdString();
	std::string password = qstring_password.toStdString();
	std::string string_child = qstring_child.toStdString();

	std::shared_ptr<User> child = Database::FindUser(string_child, " ", false);

	std::shared_ptr<User> new_user;

	if (role == "Student") {
		new_user = std::shared_ptr<Student>(new Student(email, password, name, surname, dob));
		
	} else if(role=="Teacher") {
		new_user = std::shared_ptr<Teacher>(new Teacher(email, password, name, surname, dob));
	}
	else if (role == "Parent") {
		auto student_child = std::dynamic_pointer_cast<Student>(child); // we cast it to a student bc we need student but its a user
		new_user = std::shared_ptr<Parent>(new Parent(email, password, name, surname, dob, student_child));
	}
	else {
		std::cout << "No role found " << std::endl;
	}

	bool success = Database::AddUser(new_user);
	if (success == true) {
		ui.stackedWidget->setCurrentWidget(ui.LoginPage);
	}
	else {
		ui.SurnameField->clear();
		ui.NameField->clear();
		ui.EmailField->clear();
		ui.DobField->clear();
		ui.PasswordFieldSignUp->clear();
		ui.ChildsNameField->clear();
		ui.RoleFieldSignUp->clear();
	}
	
}

void StudentManagement::ShowChildSignUp() {
	QString text = ui.RoleFieldSignUp->currentText();
	if (text == "Parent") {
		ui.ChildsNameField->setVisible(true);
		ui.ChildsName->setVisible(true);
	}
	else {
		ui.ChildsNameField->setVisible(false);
		ui.ChildsName->setVisible(false);
	}

}