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
	void SendEmail(const Mail& mail);

	// static so we don't have to create an object and can user Database::FindUser
	static std::shared_ptr<User> FindUser(const std::string& _email, const std::string& _password, const bool _for_login);

	static void UpdateUserInDatabase(const std::shared_ptr<User>& updated_user, const std::string& original_email);
	static bool AddUser(const std::shared_ptr<User>& student);

	// SUBJECTS
	static void SaveEnrollment(const std::string& subject_name, const std::string& teacher_email, const std::string& student_email);
	static std::vector<SubjectTeacher> GetAllSubjects();
	static bool CheckUserInSubject(const std::string& subjects_name, const std::string& students_email);

	//ASSIGNMENTS
	static void SaveAssignment(const std::string& subject_name, const std::string& name, const std::string& description);
};



