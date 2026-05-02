#include "student_management.h"
#include "database.h"

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
	m_all_subjects.clear();

	std::vector<SubjectTeacher> all_subjects_string = Database::GetAllSubjects();

	for (const auto& entry : all_subjects_string) {
		std::string subject_str = entry.subject_name;
		std::string teacher_str = entry.teacher_name;
		std::shared_ptr<Teacher> teacher_ptr = std::dynamic_pointer_cast<Teacher>(Database::FindUser(teacher_str, " ", false));
		SubjectName subject = StringToSubjectName(subject_str);
		
		std::shared_ptr<Subject> new_subject = std::shared_ptr<Subject>(new Subject(subject, teacher_ptr));
		m_all_subjects.push_back(new_subject);
	}
	


	for (auto& subject : m_all_subjects) {
		QListWidgetItem* item = new QListWidgetItem(ui.EnrollmentListWidget);
		QWidget* rowWidget = new QWidget();
		QHBoxLayout* rowLayout = new QHBoxLayout(rowWidget);
		QLabel* label = new QLabel(QString::fromStdString(subject->GetName()));
		QPushButton* enrollBtn = new QPushButton("Enroll");

		std::string students_email = m_logged_in->GetEmail();
		std::string subjects_name = subject->GetName();

		if (Database::CheckUserInSubject(subjects_name, students_email)) {
			enrollBtn->setText("Enrolled");
			enrollBtn->setEnabled(false); // Make it non-clickable
		}

		rowLayout->addWidget(label);
		rowLayout->addStretch();
		rowLayout->addWidget(enrollBtn);
		rowLayout->setContentsMargins(5, 2, 5, 2);

		connect(enrollBtn, &QPushButton::clicked, [this, subject, enrollBtn]() {
			std::string students_email = m_logged_in->GetEmail();
			std::string subjects_name = subject->GetName();
			std::string teachers_email = subject->GetTeacher()->GetEmail();
			bool is_already = Database::CheckUserInSubject(subjects_name, students_email);

			if (is_already) {
				QMessageBox::critical(this, "Error", "Student already enrolled");
			}
			else {
				Database::SaveEnrollment(subjects_name, teachers_email, students_email);
				QMessageBox::information(this, "Success", "Enrolled successfully!");
				enrollBtn->setText("Enrolled");
				enrollBtn->setEnabled(false);
			}
		});

		ui.EnrollmentListWidget->addItem(item);
		ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
	}
}