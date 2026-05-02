#include "student_management.h"

void StudentManagement::handleLogout() {
	ui.stackedWidget->setCurrentWidget(ui.LoginPage);
}

void StudentManagement::goToMainMenu() {
	ui.stackedWidget->setCurrentWidget(ui.MainMenuPage);
}

void StudentManagement::goToSettings() {
	ui.stackedWidget->setCurrentWidget(ui.SettingsPage);
}

void StudentManagement::goToMail() {
	ui.stackedWidget->setCurrentWidget(ui.MailPage);
}

void StudentManagement::AddSubject() {
	ui.EnrollmentListWidget->clear();

	for (auto& subject : allAvailableSubjects) {
		QListWidgetItem* item = new QListWidgetItem(ui.EnrollmentListWidget);
		QWidget* rowWidget = new QWidget();
		QHBoxLayout* rowLayout = new QHBoxLayout(rowWidget);
		QLabel* label = new QLabel(QString::fromStdString(subject->GetName()));
		QPushButton* enrollBtn = new QPushButton("Enroll");

		rowLayout->addWidget(label);
		rowLayout->addStretch();
		rowLayout->addWidget(enrollBtn);
		rowLayout->setContentsMargins(5, 2, 5, 2);

		connect(enrollBtn, &QPushButton::clicked, [this, subject]() {
			subject->AddStudent(m_logged_in);
			Database::SaveEnrollment(subject);
		});

		ui.EnrollmentListWidget->addItem(item);
		ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
	}
}