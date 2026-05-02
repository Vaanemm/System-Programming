#pragma once
#include <string>
#include <vector>
#include "student.h"
#include "mail.h"
#include "user.h"
#include <QMessageBox>

class Database {
public:	
	std::string Read();
	void Write(const std::vector<std::shared_ptr<Student>>& stud_list);
	void SendEmail(const Mail& mail);

	// static so we don't have to create an object and can user Database::FindUser
	static std::shared_ptr<User> FindUser(const std::string _email, const std::string _password, const bool _for_login);

	static bool AddUser(const std::shared_ptr<User>& student);

	// SUBJECTS
	static void SaveEnrollment(const std::shared_ptr<Subject>& subject);
};



