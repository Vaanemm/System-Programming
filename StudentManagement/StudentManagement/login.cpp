#include "student_management.h"
#include <QMessageBox>
#include "database.h"
#include <iostream>



void StudentManagement::handleLogin() {
	QString email = ui.UserNameField->text();
	QString pass = ui.PasswordField->text();

	
	m_cancel_login = false;
	m_thread_finished = false;
	//m_logged_in = Database::FindUser(email.toStdString(), pass.toStdString(), true);
	m_thread_load_folder = std::thread([this, email, pass]() {
		m_logged_in = Database::FindUser(email.toStdString(), pass.toStdString(), true, &m_cancel_login);
		m_thread_finished = true;
	});

	QDialog* popup = new QDialog(this);
	popup->setWindowTitle("Logging in");
	QVBoxLayout* layout = new QVBoxLayout(popup);
	layout->addWidget(new QLabel("Logging in - looking for user in database..."));
	QPushButton* cancelBtn = new QPushButton("Cancel");
	layout->addWidget(cancelBtn);
	popup->show();

	connect(cancelBtn, &QPushButton::clicked, this, [this, popup]() {
		m_cancel_login = true;
		popup->close();
	});

	while (!m_cancel_login && !m_thread_finished) {
		QCoreApplication::processEvents();
		std::this_thread::sleep_for(std::chrono::milliseconds(50));
	}

	m_thread_load_folder.join();

	popup->close();

	if (m_logged_in != nullptr) {
		ui.stackedWidget->setCurrentWidget(ui.MainMenuPage);
		StudentManagement::RefreshEnrollments();
		StudentManagement::ViewAssignments();
		StudentManagement::ViewSubmissions();
		StudentManagement::CloseAssignmentInfo();
		StudentManagement::CloseSubmissionInfo();

	}
	else if (m_cancel_login) {
		return;
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