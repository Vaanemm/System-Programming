#pragma once
#include <string>
#include <vector>
#include "student.h"
#include "mail.h"
#include "user.h"
#include <QMessageBox>

struct SubjectTeacher {
	std::string subject_name;
	std::string teacher_name;

	// Overload the < operator so we can use this in a std::set to keep it unique (only for subject, teacher can be multiple)
	bool operator<(const SubjectTeacher& other) const {
		return subject_name < other.subject_name;
	}
};

class Database {
public:	
	std::string Read();
	static void Write(const std::vector<std::shared_ptr<Student>>& stud_list);
	static std::string DeleteKommas(const std::string& input);

	// static so we don't have to create an object and can user Database::FindUser
	static std::shared_ptr<User> FindUser(const std::string& _email, const std::string& _password, const bool _for_login, std::atomic<bool>* _cancel = nullptr);

	static void UpdateUserInDatabase(const std::shared_ptr<User>& updated_user, const std::string& original_email);
	static bool AddUser(const std::shared_ptr<User>& student);
	static std::string HashPassword(const std::string& _password);

	// SUBJECTS
	static void SaveEnrollment(const std::string& subject_name, const std::string& teacher_email, const std::string& student_email);
	static std::vector<SubjectTeacher> GetAllSubjects();
	static bool CheckUserInSubject(const std::string& subjects_name, const std::string& students_email);
	static bool CheckTeacherEmptyInSubject(const std::string& subject_name);
	static void SaveTeacherForSubject(const std::string& subject_name, const std::string& teacher_email);

	//ASSIGNMENTS
	static void SaveAssignment(const std::string& subject_name, const std::string& name, const std::string& description, const std::string& file_path = "");
	static std::vector<std::tuple<std::string, std::string, std::string, std::string>> GetAllAssignments();

	//SUBMISSIONS
	static void SaveSubmission(const std::string& subject_name, const std::string& assignment_title,	const std::string& student_email, const std::string& file_path);
	static std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>> GetSubmissions(const std::string& filter_email, bool is_student, const std::vector<std::string>& subject_names);
	static bool HasStudentSubmitted(const std::string& subject_name, const std::string& assignment_title, const std::string& student_email);
	static void UpdateSubmissionGrade(const std::string& subject_name, const std::string& assignment_title, const std::string& student_email, int grade, const std::string& comment);

	//MAILS
	static void SendEmail(const Mail& mail);
	static std::vector<std::unique_ptr<Mail>> GetMailsForReceiver(const std::string& receiver);
	static std::vector<std::unique_ptr<Mail>> GetMailsForSender(const std::string& sender);



};



