#include "student_management.h"
#include <QMessageBox>
#include "school.h"

void StudentManagement::handleLogin() {
	QString email = ui._mail->text();
	QString pass = ui._password->text();

	User* LoggedIn = m_school.FindUser(email.toStdString(), pass.toStdString());

	if (LoggedIn != nullptr) {
		ui.stackedWidget->setCurrentIndex(1);
		m_school.SetCurrentUser(LoggedIn);
	}
	else {
		QMessageBox::warning(this, "Error", "Invalid inputs");
	}
}

void StudentManagement::goToSignup() {
	ui.stackedWidget->setCurrentIndex(2);
}