#pragma once
#include "user.h"
#include "student.h"

class Parent : public User {
public:
	Parent(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob, std::shared_ptr<Student> _student);

	Student* GetStudent() const;
	std::string ToString() const;

	std::string GetRole() const override;
	std::string GetChild() const override;

private:
	std::shared_ptr<Student> m_student;
};