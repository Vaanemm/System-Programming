#include "student_management.h"
#include <QMessageBox>
#include "database.h"

void StudentManagement::handleLogin() {
	QString email = ui.UserNameField->text();
	QString pass = ui.PasswordField->text();

	std::shared_ptr<User> LoggedIn = Database::FindUser(email.toStdString(), pass.toStdString());

	if (LoggedIn != nullptr) {
		ui.stackedWidget->setCurrentIndex(1);
		//Database.SetCurrentUser(LoggedIn);
	}
	else {
		QMessageBox::warning(this, "Error", "Invalid inputs");
	}
}

void StudentManagement::goToSignup() {
	ui.stackedWidget->setCurrentWidget(ui.SignUpPage);
}