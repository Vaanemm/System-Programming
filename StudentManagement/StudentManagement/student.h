#pragma once
#include "user.h"
#include "subjects.h"
#include <vector>

class Student : public User {
public: 
	Student(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob);

	const std::vector<Subject*>& GetSubjects() const;
	std::string ToString() const;
	void AddSubject(Subject* subject);

private:
	std::vector<Subject*> m_subjects;
};