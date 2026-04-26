#pragma once
#include "user.h"
#include "subjects.h"

class Student : public User {
public: 
	Student(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob);

	Subject* GetSubject() const;
	std::string ToString() const;
	void AddSubject(Subject* subject);

private:
	Subject* m_subject = nullptr;
};