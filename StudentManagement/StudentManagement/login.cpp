#include "student_management.h"
#include <QMessageBox>
#include "database.h"
#include <iostream>

void StudentManagement::handleLogin() {
	QString email = ui.UserNameField->text();
	QString pass = ui.PasswordField->text();

	m_logged_in = Database::FindUser(email.toStdString(), pass.toStdString(), true);

	if (m_logged_in != nullptr) {
		ui.stackedWidget->setCurrentWidget(ui.MainMenuPage);
		StudentManagement::RefreshEnrollments();
	}
	else {
		QMessageBox::warning(this, "Error", "Invalid inputs");
	}
}

void StudentManagement::GoToSignUp() {
	ui.stackedWidget->setCurrentWidget(ui.SignUpPage);
}