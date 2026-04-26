#include "student.h"

Student::Student(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob,
	Subject* _subject) 
	: User(_email, _password, _name, _surname, _dob),// this goes to user class
	m_subject(_subject) {}//specific to student class)

Subject* Student::GetSubject() const {
	return m_subject;
}

std::string Student::ToString() const {
	std::string output;
	output = "User information: \n";
	output += "First name: " + GetName() + "\n";
	output += "Subjects: " + GetSubject()->GetName();
	return output;

}