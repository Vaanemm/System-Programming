#include "student.h"

Student::Student(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob)
	: User(_email, _password, _name, _surname, _dob) {}

Subject* Student::GetSubject() const {
	return m_subject;
}

std::string Student::ToString() const {
	std::string output;
	output = "User information: \n";
	output += "First name: " + GetName() + "\n";
	if (m_subject != nullptr) {
		output += "Subjects: " + GetSubject()->GetName();
	}
	else {
		output += "Subjects: None assigned";
	}
	return output;
}

void Student::AddSubject(Subject* subject) {
	m_subject = subject;
}