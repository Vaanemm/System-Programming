#pragma once
#include "user.h"
#include "student.h"

class Parent : public User {
public:
	Parent(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob, std::unique_ptr<Student> _student);

	Student* GetStudent() const;
	std::string ToString() const;

private:
	std::unique_ptr<Student> m_student;
};