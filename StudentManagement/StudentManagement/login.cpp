#include "student_management.h"
#include <QMessageBox>
#include "database.h"
#include <iostream>
#include <errors_class.h>

void StudentManagement::handleLogin() {
	QString email = ui.UserNameField->text();
	QString pass = ui.PasswordField->text();

	m_logged_in = Database::FindUser(email.toStdString(), pass.toStdString(), true);

	if (m_logged_in != nullptr) {
		ui.stackedWidget->setCurrentWidget(ui.MainMenuPage);
		StudentManagement::RefreshEnrollments();
		StudentManagement::ViewAssignments();
		StudentManagement::ViewSubmissions();
		StudentManagement::CloseAssignmentInfo();
		StudentManagement::CloseSubmissionInfo();

	}
	else {
		Errors not_logged_in = Errors::login_failed;
		ErrorHandler::DisplayMessage(not_logged_in);
		ui.UserNameField->clear();
		ui.PasswordField->clear();
	}
}

void StudentManagement::GoToSignUp() {
	ui.stackedWidget->setCurrentWidget(ui.SignUpPage);
}