#include "student_management.h"
#include "date.h"
#include "database.h"
#include <iostream>

void StudentManagement::UpdateAccount() {
	QString qstring_surname = ui.SurnameFieldSettings->text();
	QString qstring_name = ui.NameFieldSettings->text();
	QString qstring_email = ui.EmailFieldSettings->text();
	QString qstring_password = ui.PasswordFieldSettings->text();
	QDate dob_qdate = ui.DobFieldSettings->date();
	Date dob = Date(dob_qdate);

	std::string surname = qstring_surname.toStdString();
	std::string name = qstring_name.toStdString();
	std::string email = qstring_email.toStdString();
	std::string password = qstring_password.toStdString();

	std::string original_email = m_logged_in->GetEmail();

	m_logged_in->updateUser(email, password, name, surname, dob);
	Database::UpdateUserInDatabase(m_logged_in, original_email);

	ui.stackedWidget->setCurrentWidget(ui.MainMenuPage);
}