#include "student_management.h"
#include "database.h"
#include "assignment.h"
#include "parent.h"
#include "errors_class.h"
#include <iostream>
#include <QFileDialog>
#include <QFileInfo>

void StudentManagement::handleLogout() {
	m_logged_in = nullptr;
	m_all_subjects.clear();
	
	ui.EnrollmentListWidget->clear();
	ui.SubmissionsTreeWidget->clear();
	ui.AssignmentsTreeWidget->clear();

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
	RefreshInbox();
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

			auto student = std::dynamic_pointer_cast<Student>(m_logged_in);
			auto teacher = std::dynamic_pointer_cast<Teacher>(m_logged_in);

			if (student) {
				std::string students_email = student->GetEmail();
				std::string subjects_name = subject->GetName();



				if (Database::CheckUserInSubject(subjects_name, students_email)) {
					enrollBtn->setText("Enrolled");
					enrollBtn->setEnabled(false);
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
			else if (teacher) {
				std::string teachers_email = teacher->GetEmail();
				std::string subjects_name = subject->GetName();

				bool is_already_enrolled = false;
				for (const auto& subject_of_teacher : teacher->GetSubjects()) {
					if (subject_of_teacher->GetName() == subjects_name) {
						is_already_enrolled = true;
						break;
					}
				}
				if (is_already_enrolled) {
					enrollBtn->setText("Enrolled");
					enrollBtn->setEnabled(false);
				} 
				else if (!Database::CheckTeacherEmptyInSubject(subjects_name)) {
					enrollBtn->setText("Not available");
					enrollBtn->setEnabled(false);
				}
				rowLayout->addWidget(label);
				rowLayout->addStretch();
				rowLayout->addWidget(enrollBtn);
				rowLayout->setContentsMargins(5, 2, 5, 2);

				connect(enrollBtn, &QPushButton::clicked, [this, subject, enrollBtn]() {
					std::string teachers_email = m_logged_in->GetEmail();
					std::string subjects_name = subject->GetName();

					Database::SaveTeacherForSubject(subjects_name, teachers_email);

					auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);
					if (teacher_ptr) {
						teacher_ptr->AddSubject(subject);
					}

					QMessageBox::information(this, "Success", "Enrolled successfully!");
					enrollBtn->setText("Enrolled");
					enrollBtn->setEnabled(false);

				});
				ui.EnrollmentListWidget->addItem(item);
				ui.EnrollmentListWidget->setItemWidget(item, rowWidget);
			}

			
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
			//std::cout << "child bestaat niet" << std::endl;
			ErrorHandler::DisplayMessage(Errors::no_child_found);
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
	else if (teacher_ptr) {
		ui.AddSubjectButton->show();
		const auto& subjects = teacher_ptr->GetSubjects();

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
}

void StudentManagement::CreateAssignment() {
	QString qstring_title = ui.TitleField->text();
	QString qstring_description = ui.DescriptionField->text();

	std::string title = qstring_title.toStdString();
	std::string description = qstring_description.toStdString();

	if (title.empty() || description.empty()) {
		ErrorHandler::DisplayMessage(Errors::invalid_input);
		return;
	}

	int index = ui.SelectCourseComboBox->currentIndex();
	if (index >= 0 && index < m_all_subjects.size()) {
		m_all_subjects[index]->MakeAssignment(title, description, m_selected_file_path);

		m_selected_file_path.clear();
		ui.SelectFileButton->setText("Select File");
		ui.TitleField->clear();
		ui.DescriptionField->clear();
		ui.AddAssignmentButton->setText("+");

		ViewAssignments();

		QMessageBox::information(this, "Success", "Assignment made");
	}
}

void StudentManagement::FillInComboBoxSubjects()
{
	ui.SelectCourseComboBox->clear();
	m_all_subjects.clear();

	auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);
	if (!teacher_ptr) return;

	for (const auto& subject : teacher_ptr->GetSubjects()) {
		m_all_subjects.push_back(subject);
		ui.SelectCourseComboBox->addItem(QString::fromStdString(subject->GetName()));
	}
}
	
void StudentManagement::ViewAssignments()
{
	ui.AssignmentsTreeWidget->clear();
	ui.frame_2->hide();
	ui.AddAssignmentButton->hide();
	//dynamic pointers ipv getters omdat getstudent en getsubjects niet in user zitten, kan mss fixe met iets van virtual
	auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
	auto parent_ptr = std::dynamic_pointer_cast<Parent>(m_logged_in);
	auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);

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
	else if (teacher_ptr) {
		ui.AddAssignmentButton->show();
		subjects_to_show = teacher_ptr->GetSubjects();
	}

	if (subjects_to_show.empty()) return;

	std::string logged_in_student_email = "";
	if (student_ptr) {
		logged_in_student_email = student_ptr->GetEmail();
	}
	else if (parent_ptr) {
		Student* child = parent_ptr->GetStudent();
		if (child)
			logged_in_student_email = child->GetEmail();
	}

	auto all_assignments = Database::GetAllAssignments();

	for (const auto& subject : subjects_to_show) {
		QTreeWidgetItem* subjectItem = new QTreeWidgetItem(ui.AssignmentsTreeWidget);
		subjectItem->setText(0, QString::fromStdString(subject->GetName()));

		for (const auto& assignment : all_assignments) {
			if (std::get<0>(assignment) == subject->GetName()) {

				if (!logged_in_student_email.empty()) {
					if (Database::HasStudentSubmitted(subject->GetName(),
						std::get<1>(assignment),
						logged_in_student_email)) {
						continue;
					}
				}

				QTreeWidgetItem* assignmentItem = new QTreeWidgetItem(subjectItem);
				assignmentItem->setText(0, QString::fromStdString(std::get<1>(assignment)));
				assignmentItem->setText(1, QString::fromStdString(std::get<2>(assignment)));
				assignmentItem->setText(2, QString::fromStdString(std::get<3>(assignment)));
				ui.AssignmentsTreeWidget->setColumnHidden(1, true);
				ui.AssignmentsTreeWidget->setColumnHidden(2, true);
			}
		}
	}
	ui.AssignmentsTreeWidget->expandAll();
}

void StudentManagement::ShowCreateAssignment() {
	if (ui.AddAssignmentButton->text() == "+") {
		ui.AddAssignmentButton->setText("-");
		FillInComboBoxSubjects();
		ui.frame_2->show();
	}
	else {
		ui.AddAssignmentButton->setText("+");
		ui.frame_2->hide();
	}
}

void StudentManagement::UploadFile()
{
	QString file_path = QFileDialog::getOpenFileName(this,"Pick a file",QString(),"");

	if (!file_path.isEmpty()) {
		m_selected_file_path = file_path.toStdString();

		ui.SelectFileButton->setText("File selected");
	}
	else {
		ErrorHandler::DisplayMessage(Errors::file_path_empty);
	}
}
//Qt UI elementen kunnen enkel met normale pointers
void StudentManagement::OpenAssignment(QTreeWidgetItem* item, int column) {
	if (item->parent() == nullptr) return;

	m_selected_assignment_item = item; 

	std::string title = item->text(0).toStdString();
	std::string description = item->text(1).toStdString();
	std::string file_path = item->text(2).toStdString();

	ui.AssignmentInfoText->setText(QString::fromStdString("Assignment: " + title));
	ui.CourseInfoText->setText("Course: " + item->parent()->text(0));
	ui.DescriptionText_2->setText(QString::fromStdString("Description: " + description));

	if (!file_path.empty()) {
		ui.DownloadFileButton->setEnabled(true);
		m_selected_file_path = file_path;
	}
	else {
		ui.DownloadFileButton->setEnabled(false);
	}

	auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
	if (student_ptr) {
		ui.UploadSubmissionButton->show();
		ui.SubmitAssignmentButton->show();
	}
	else {
		ui.UploadSubmissionButton->hide();
		ui.SubmitAssignmentButton->hide();
	}

	m_submission_file_path.clear();
	ui.UploadSubmissionButton->setText("Upload File");

	ui.frame_3->show();
}

void StudentManagement::SubmitAssignment() {
	if (!m_selected_assignment_item) return;

	std::string title = m_selected_assignment_item->text(0).toStdString();
	std::string subject_name = m_selected_assignment_item->parent()->text(0).toStdString();
	std::string student_email = m_logged_in->GetEmail();

	Database::SaveSubmission(subject_name, title, student_email, m_submission_file_path);

	QTreeWidgetItem* parent_item = m_selected_assignment_item->parent();
	parent_item->removeChild(m_selected_assignment_item);
	m_selected_assignment_item = nullptr;

	ui.frame_3->hide();
	m_submission_file_path.clear();
	ui.UploadSubmissionButton->setText("Upload File");

	ViewSubmissions();
	QMessageBox::information(this, "Submitted", "Assignment submitted successfully!");
}

void StudentManagement::DownloadFile() {
	if (!m_selected_file_path.empty()) {
		std::string command = "start \"\" \"" + m_selected_file_path + "\"";
		system(command.c_str());
	}
}

void StudentManagement::CloseAssignmentInfo() {
	ui.frame_3->hide();
}

void StudentManagement::UploadSubmissionFile() {
	QString file_path = QFileDialog::getOpenFileName(this, "Pick a submission file", QString(), "");
	if (!file_path.isEmpty()) {
		m_submission_file_path = file_path.toStdString();
		ui.UploadSubmissionButton->setText("File selected");
	}
}

void StudentManagement::ViewSubmissions() {
	ui.SubmissionsTreeWidget->clear();

	auto student_ptr = std::dynamic_pointer_cast<Student>(m_logged_in);
	auto parent_ptr = std::dynamic_pointer_cast<Parent>(m_logged_in);
	auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);

	std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>> submissions;

	if (student_ptr) {
		submissions = Database::GetSubmissions(student_ptr->GetEmail(), true, {});
	}
	else if (parent_ptr) {
		Student* child = parent_ptr->GetStudent();
		if (child)
			submissions = Database::GetSubmissions(child->GetEmail(), true, {});
	}
	else if (teacher_ptr) {
		std::vector<std::string> subject_names;
		for (const auto& s : teacher_ptr->GetSubjects())
			subject_names.push_back(s->GetName());

		submissions = Database::GetSubmissions("", false, subject_names);
	}

	std::map<std::string, std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>>> grouped;
	for (const auto& sub : submissions)
		grouped[std::get<0>(sub)].push_back(sub);

	for (auto it = grouped.begin(); it != grouped.end(); ++it) {
		const std::string& subject_name = it->first;
		const auto& subs = it->second;

		QTreeWidgetItem* subjectItem = new QTreeWidgetItem(ui.SubmissionsTreeWidget);
		subjectItem->setText(0, QString::fromStdString(subject_name));

		for (const auto& sub : subs) {
			QTreeWidgetItem* subItem = new QTreeWidgetItem(subjectItem);

			subItem->setText(0, QString::fromUtf8(std::get<1>(sub).c_str()));
			subItem->setText(1, QString::fromUtf8(std::get<2>(sub).c_str()));
			subItem->setText(2, QString::fromUtf8(std::get<3>(sub).c_str()));
			subItem->setData(0, Qt::UserRole, QString::fromUtf8(std::get<4>(sub).c_str())); 
			subItem->setData(0, Qt::UserRole + 1, QString::fromUtf8(std::get<5>(sub).c_str()));

			if (teacher_ptr) {
				std::string display = std::get<1>(sub) + " - " + std::get<2>(sub);
				subItem->setText(0, QString::fromUtf8(display.c_str()));
			}
		}
	}
	ui.SubmissionsTreeWidget->expandAll();
}

void StudentManagement::OpenSubmission(QTreeWidgetItem* item, int column) {
	if (item == nullptr || item->parent() == nullptr) return;

	auto teacher_ptr = std::dynamic_pointer_cast<Teacher>(m_logged_in);

	std::string subject = item->parent()->text(0).toStdString();
	std::string display_text = item->text(0).toStdString();
	std::string student_email = item->text(1).toStdString();
	std::string file_path = item->text(2).toStdString();
	int current_grade = item->data(0, Qt::UserRole).toString().toInt();
	std::string comment = item->data(0, Qt::UserRole + 1).toString().toStdString();

	std::string assignment_title = display_text;
	size_t delimiter_pos = display_text.find(" - ");
	if (delimiter_pos != std::string::npos) {
		assignment_title = display_text.substr(0, delimiter_pos);
	}

	ui.CourseSubmissionText->setText(QString::fromUtf8(("Course: " + subject).c_str()));
	ui.NameSubmissionText->setText(QString::fromUtf8(("Name: " + assignment_title).c_str()));
	ui.NameStudentSubmissionText->setText(QString::fromUtf8(("Student: " + student_email).c_str()));
	ui.DescriptionSubmissionText->setText(QString::fromUtf8(("Comment: " + comment).c_str()));

	ui.DownloadSubmissionFileButton->setEnabled(!file_path.empty());

	ui.GradeSubmissionText->setText(QString::fromUtf8(("Grade: " + std::to_string(current_grade)).c_str()));

	ui.frame_4->show();

	if (teacher_ptr == nullptr) {
		ui.NameStudentSubmissionText->hide();
		ui.label_10->hide();
		ui.GradeSubmissionSpinBox->hide();
		ui.GradeSubmissionFile->hide();
		ui.CommentsSubmissionText->hide();
		ui.CommentsSubmissionField->hide();
	}
	else { //anders als je eerst inlogt met student en dan met prof werkt het niet
		ui.NameStudentSubmissionText->show();
		ui.label_10->show();
		ui.GradeSubmissionSpinBox->show();
		ui.GradeSubmissionFile->show();
		ui.CommentsSubmissionText->show();
		ui.CommentsSubmissionField->show();
	}
}

void StudentManagement::CloseSubmissionInfo() {
	ui.frame_4->hide();
}

void StudentManagement::GradeSubmission() {
	QTreeWidgetItem* item = ui.SubmissionsTreeWidget->currentItem();

	if (item == nullptr || item->parent() == nullptr) {
		QMessageBox::warning(this, "error", "not good");
		return;
	}

	std::string subject = item->parent()->text(0).toStdString();
	std::string display_text = item->text(0).toStdString();

	std::string assignment_title = display_text;
	size_t delimiter_pos = display_text.find(" - ");
	if (delimiter_pos != std::string::npos) {
		assignment_title = display_text.substr(0, delimiter_pos);
	}

	std::string student_email = item->text(1).toStdString();
	int grade = ui.GradeSubmissionSpinBox->value();
	std::string comment = ui.CommentsSubmissionField->text().toStdString();

	Database::UpdateSubmissionGrade(subject, assignment_title, student_email, grade, comment);

	QMessageBox::information(this, "yess", " wwww!");

	ViewSubmissions();
	ui.GradeSubmissionSpinBox->setValue(0);
	ui.CommentsSubmissionField->clear();
	ui.frame_4->hide();
}
