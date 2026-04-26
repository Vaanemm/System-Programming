#include "teacher.h"
#include "subjects.h" // so we include it here beacause we need it for GetSubject()->GetName()

Teacher::Teacher(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob)
	: User(_email, _password, _name, _surname, _dob) {} // this goes to user class

Subject* Teacher::GetSubject() const {
	return m_subject;
}

std::string Teacher::ToString() const {
	std::string output;
	output = "Teacher information: \n";
	output += "First name: " + GetName() + "\n";
	if (m_subject != nullptr){ // here we do a check because no course is given in constructor so not nesserarily existing
		output += "Subjects: " + GetSubject()->GetName();
	}
	else {
		output += "Subjects: None assigned";
	}
	
	return output;
}