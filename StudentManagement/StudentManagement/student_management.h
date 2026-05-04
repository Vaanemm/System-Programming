#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentManagement.h"
#include "user.h"

class Subject;
class School; // useful so we can use m_currentuser in login for ex.

class StudentManagement : public QMainWindow
{
	Q_OBJECT

public:
	StudentManagement(QWidget *parent = Q_NULLPTR);

private slots:
	//LOGIN
	void handleLogin();
	void GoToSignUp();

	//SIGN UP 
	void GoToLogin();
	void SignUp();
	void ShowChildSignUp();

	//BAR 
	void handleLogout();
	void goToMainMenu();
	void goToSettings();
	void goToMail();

	//MAIN WINDOW	
	
	//enrollment
	void AddSubject();
	void RefreshEnrollments();
		
	//assigments
	void CreateAssignment();
	void FillInComboBoxSubjects();
	void ViewAssignments();
	void ShowCreateAssignment();
	void UploadFile();
	void OpenAssignment(QTreeWidgetItem* item, int column);
	void DownloadFile();
	void CloseAssignmentInfo();

	//SETTINGS
	void UpdateAccount();

	//Mail
	void SendNewMail();
	void RefreshInbox();


private:
	std::shared_ptr<User> m_logged_in = nullptr;
	Ui::StudentManagementClass ui;
	
	std::string m_selected_file_path;
	std::vector<std::shared_ptr<Subject>> m_all_subjects;
};