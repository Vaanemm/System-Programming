#include "student_management.h"
#include <iostream>
#include <QDebug>
#include <QPushButton>

StudentManagement::StudentManagement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//LOGIN SCREEN CONNCETIONS
	connect(ui.LoginButton, &QPushButton::clicked, this, &StudentManagement::handleLogin);
	connect(ui.SignUpPageButton, &QPushButton::clicked, this, &StudentManagement::GoToSignUp);

	//SIGN UP CONNECTIONS
	ui.ChildsNameField->hide();
	ui.ChildsName->hide();
	connect(ui.LoginPageButton, &QPushButton::clicked, this, &StudentManagement::GoToLogin);
	connect(ui.SignUpButton, &QPushButton::clicked, this, &StudentManagement::SignUp);
	connect(ui.RoleFieldSignUp, &QComboBox::currentTextChanged, this, &StudentManagement::ShowChildSignUp);

	//BAR
	connect(ui.LogoutButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::handleLogout);
	connect(ui.LogoutButtonMail, &QPushButton::clicked, this, &StudentManagement::handleLogout);
	connect(ui.LogoutButtonSettings, &QPushButton::clicked, this, &StudentManagement::handleLogout);

	connect(ui.MainMenuPageButtonMail, &QPushButton::clicked, this, &StudentManagement::goToMainMenu);
	connect(ui.MainMenuPageButtonSettings, &QPushButton::clicked, this, &StudentManagement::goToMainMenu);

	connect(ui.MailPageButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::goToMail);
	connect(ui.MailPageButtonSettings, &QPushButton::clicked, this, &StudentManagement::goToMail);

	connect(ui.SettingsPageButtonMainMenu, &QPushButton::clicked, this, &StudentManagement::goToSettings);
	connect(ui.SettingsPageButtonMail, &QPushButton::clicked, this, &StudentManagement::goToSettings);

	//MAIN WINDOW	
	connect(ui.AddSubjectButton, &QPushButton::clicked, this, &StudentManagement::AddSubject);
	connect(ui.CreateAssignmentButton, &QPushButton::clicked, this, &StudentManagement::CreateAssignment);
	connect(ui.AddAssignmentButton, &QPushButton::clicked, this, &StudentManagement::ShowCreateAssignment);
	connect(ui.SelectFileButton, &QPushButton::clicked, this, &StudentManagement::UploadFile);
	connect(ui.DownloadFileButton, &QPushButton::clicked, this, &StudentManagement::DownloadFile);
	connect(ui.AssignmentsTreeWidget, &QTreeWidget::itemClicked, this, &StudentManagement::OpenAssignment);
	connect(ui.CloseAssignmentInfoButton, &QPushButton::clicked, this, &StudentManagement::CloseAssignmentInfo);
	connect(ui.UploadSubmissionButton, &QPushButton::clicked, this, &StudentManagement::UploadSubmissionFile);
	connect(ui.SubmitAssignmentButton, &QPushButton::clicked, this, &StudentManagement::SubmitAssignment);
	connect(ui.SubmissionsTreeWidget, &QTreeWidget::itemClicked, this, &StudentManagement::OpenSubmission);
	connect(ui.CloseSubmissionInfoButton, &QPushButton::clicked, this, &StudentManagement::CloseSubmissionInfo);
	connect(ui.GradeSubmissionFile, &QPushButton::clicked, this, &StudentManagement::GradeSubmission);
	connect(ui.DownloadSubmissionFileButton, &QPushButton::clicked, this, &StudentManagement::DownloadSubmissionFile);

	//SETTINGS
	connect(ui.SaveSettingsButton, &QPushButton::clicked, this, &StudentManagement::UpdateAccount);

	//MAIL
	connect(ui.SendMailButton, &QPushButton::clicked, this, &StudentManagement::SendNewMail);
	connect(ui.tabWidget, &QTabWidget::currentChanged, this, &StudentManagement::MailTabChanged);
	connect(ui.MailInbox, &QListWidget::currentRowChanged, this, &StudentManagement::SelectMailInbox);
	connect(ui.MailSent, &QListWidget::currentRowChanged, this, &StudentManagement::SelectMailSent);

}