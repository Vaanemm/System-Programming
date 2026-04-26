#pragma once
#include "user.h"

class Subject; //cannot just include it because we did it in subjects.h so it will go in circles and bug

class Teacher : public User {
public:
	Teacher(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob);

	Subject* GetSubject() const;
	std::string ToString() const;

private:
	Subject* m_subject;
};