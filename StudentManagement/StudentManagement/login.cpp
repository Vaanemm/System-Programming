#include "student_management.h"
#include <QMessageBox>

void StudentManagement::handleLogin() {
	QString email = ui._mail->text();
	QString pass = ui._password->text();

	if (email == "student" && pass == "secret") {
		ui.stackedWidget->setCurrentIndex(1);
	}
	else {
		QMessageBox::warning(this, "Error", "Invalid inputs");
	}
}

void StudentManagement::goToSignup() {
	ui.stackedWidget->setCurrentIndex(2);
}