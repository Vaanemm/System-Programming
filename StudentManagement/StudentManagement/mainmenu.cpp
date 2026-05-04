#include "student_management.h"
#include "database.h"
#include "assignment.h"
#include "parent.h"
#include <iostream>


void StudentManagement::handleLogout() {
	m_logged_in = nullptr;
	m_all_subjects.clear();
	ui.EnrollmentListWidget->clear();
	ui.UserNameField->clear();
	ui.PasswordField->clear();
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
	if (ui.AddSubjectButton->text() == "+") {
		ui.AddSubjectButton->setText("-");
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

					auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
					if (student_ptr) {
						student_ptr->AddSubject(subject);
					}

					QMessageBox::information(this, "Success", "Enrolled successfully!");
					enrollBtn->setText("Enrolled");
					enrollBtn->setEnabled(false);
				}
			});

			ui.EnrollmentListWidget->addItem(item);
			ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
		}
	}
	else {
		ui.AddSubjectButton->setText("+");
		ui.EnrollmentListWidget->clear();
		RefreshEnrollments();
	}

	
}

void StudentManagement::RefreshEnrollments() {
	ui.EnrollmentListWidget->clear();
	ui.AddSubjectButton->hide();
	auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
	auto parent_ptr = std::dynamic_pointer_cast<Parent>(m_logged_in);
	auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);

	if (student_ptr) {
		ui.AddSubjectButton->show();
		const auto& subjects = student_ptr->GetSubjects();

		if (subjects.empty()) {
			ui.EnrollmentListWidget->addItem("No subjects enrolled.");
			return;
		}

		for (const auto& subject : subjects) {
			QListWidgetItem* item = new QListWidgetItem(ui.EnrollmentListWidget);

			//create container
			QWidget* rowWidget = new QWidget();
			QHBoxLayout* rowLayout = new QHBoxLayout(rowWidget);

			QLabel* label = new QLabel(QString::fromStdString(subject->GetName()));

			rowLayout->addWidget(label);
			rowLayout->addStretch();
			rowLayout->setContentsMargins(5, 2, 5, 2);

			//add the item and set the widget
			ui.EnrollmentListWidget->addItem(item);
			ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
		}

		
	}
	else if (parent_ptr) {
		ui.label_3->setText("Child's enrollments");
		ui.AddSubjectButton->show();
		const auto& child_email = parent_ptr->GetChild();

		std::shared_ptr<User> child_user = Database::FindUser(child_email, " ", false);
		std::shared_ptr<Student> child_ptr = std::dynamic_pointer_cast<Student>(child_user);
		if (child_ptr == nullptr) {
			std::cout << "child bestaat niet" << std::endl;
		}

		const auto& subjects = child_ptr->GetSubjects();
		if (subjects.empty()) {
			ui.EnrollmentListWidget->addItem("No subjects enrolled.");
			return;
		}

		for (const auto& subject : subjects) {
			QListWidgetItem* item = new QListWidgetItem(ui.EnrollmentListWidget);

			QWidget* rowWidget = new QWidget();
			QHBoxLayout* rowLayout = new QHBoxLayout(rowWidget);

			QLabel* label = new QLabel(QString::fromStdString(subject->GetName()));

			rowLayout->addWidget(label);
			rowLayout->addStretch();
			rowLayout->setContentsMargins(5, 2, 5, 2);

			ui.EnrollmentListWidget->addItem(item);
			ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
		}

	}
}

void StudentManagement::CheckRole()
{
	bool isTeacher = m_logged_in->GetRole() == "Teacher";
	bool isStudent = m_logged_in->GetRole() == "Student";
	bool isParent = m_logged_in->GetRole() == "Parent";

	ui.frame_2->setVisible(isTeacher);

	if (isTeacher) {
		FillInComboBoxSubjects();
	}

	if (isStudent || isParent) {
		ViewAssignments();
	}
}

void StudentManagement::CreateAssignment() {
	QString qstring_title = ui.TitleField->text();
	QString qstring_description = ui.DescriptionField->text();

	std::string title = qstring_title.toStdString();
	std::string description = qstring_description.toStdString();

	int index = ui.SelectCourseComboBox->currentIndex();
	if (index >= 0 && index < m_all_subjects.size()) {
		m_all_subjects[index]->MakeAssignment(title, description);

		ui.TitleField->clear();
		ui.DescriptionField->clear();
		ViewAssignments();

		QMessageBox::information(this, "LETSSS GOOOO", "W");
	}
}

void StudentManagement::FillInComboBoxSubjects()
{
	ui.SelectCourseComboBox->clear();
	m_all_subjects.clear();

	std::vector<SubjectTeacher> all_subjects_string = Database::GetAllSubjects();
	for (const auto& entry : all_subjects_string) {
		std::shared_ptr<Teacher> teacher_ptr = std::dynamic_pointer_cast<Teacher>(Database::FindUser(entry.teacher_name, " ", false));
		SubjectName subject = StringToSubjectName(entry.subject_name);
		
		std::shared_ptr<Subject> new_subject = std::shared_ptr<Subject>(new Subject(subject, teacher_ptr));
		m_all_subjects.push_back(new_subject);
		ui.SelectCourseComboBox->addItem(QString::fromStdString(new_subject->GetName()));
	}
}

void StudentManagement::ViewAssignments()
{
	ui.AssignmentsTreeWidget->clear();
	//dynamic pointers ipv getters omdat getstudent en getsubjects niet in user zitten, kan mss fixe met iets van virtual
	auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
	auto parent_ptr = std::dynamic_pointer_cast<Parent>(m_logged_in);

	std::vector<std::shared_ptr<Subject>> subjects_to_show;

	if (student_ptr) {
		subjects_to_show = student_ptr->GetSubjects();
	}
	else if (parent_ptr) {
		Student* child = parent_ptr->GetStudent();
		if (child) {
			subjects_to_show = child->GetSubjects();
		}
	}

	if (subjects_to_show.empty()) return;

	auto all_assignments = Database::GetAllAssignments();

	for (const auto& subject : subjects_to_show) {
		QTreeWidgetItem* subjectItem = new QTreeWidgetItem(ui.AssignmentsTreeWidget);
		subjectItem->setText(0, QString::fromStdString(subject->GetName()));

		for (const auto& assignment : all_assignments) {
			if (std::get<0>(assignment) == subject->GetName()) {
				QTreeWidgetItem* assignmentItem = new QTreeWidgetItem(subjectItem);
				assignmentItem->setText(0, QString::fromStdString(std::get<1>(assignment)));
				assignmentItem->setText(1, QString::fromStdString(std::get<2>(assignment)));
			}
		}
	}
	ui.AssignmentsTreeWidget->expandAll();
}


