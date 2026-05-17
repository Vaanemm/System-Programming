#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StudentManagement.h"
#include "user.h"
#include <thread>
#include <errors_class.h>


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
	std::vector<char> LoadPDF(const std::string& path);
	void RenderPDF(const std::vector<char>& _pdfData);
	void CloseAssignmentInfo();

	//submissions
	void UploadSubmissionFile();
	void SubmitAssignment();
	void ViewSubmissions();
	void CloseSubmissionInfo();
	void OpenSubmission(QTreeWidgetItem* item, int column);
	void GradeSubmission();
	void DownloadSubmissionFile();

	//SETTINGS
	void UpdateAccount();

	//Mail
	void SendNewMail();
	void RefreshInbox();
	void RefreshSent();
	void MailTabChanged(int index);
	void SelectMailInbox(int index);
	void SelectMailSent(int index);




private:
	std::shared_ptr<User> m_logged_in = nullptr;
	std::thread m_thread_load_folder;

	// = false because it should always stay false, unless a thread is stopped early
	std::atomic<bool> m_cancel_login = false;
	std::atomic<bool> m_thread_finished = false;

	Ui::StudentManagementClass ui;
	
	std::string m_selected_file_path;
	std::string m_submission_file_path;
	std::string m_selected_submission_download_path;

	std::map<std::string, std::vector<char>> m_pdfCache;
	const int MAX_CACHE_SIZE = 5;

	QTreeWidgetItem* m_selected_assignment_item = nullptr;


	std::vector<std::shared_ptr<Subject>> m_all_subjects;
};