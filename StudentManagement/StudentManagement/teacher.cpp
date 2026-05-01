#include "teacher.h"
#include "subjects.h" // so we include it here beacause we need it for GetSubject()->GetName()

Teacher::Teacher(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob)
	: User(_email, _password, _name, _surname, _dob) {} // this goes to user class

const std::vector<Subject*>& Teacher::GetSubjects() const {
	return m_subjects;
}

std::string Teacher::ToString() const {
	std::string output;
	output = "Teacher information: \n";
	output += "First name: " + GetName() + "\n";
	if (m_subjects.empty()) {
		output += "None assigned";
	}
	else {
		for (size_t i = 0; i < m_subjects.size(); i++) {
			output += m_subjects[i]->GetName();

			if (i < m_subjects.size() - 1) { // add comma if necessary
				output += ", ";
			}
			else {
				output += ".";
			}
		}
	}
	//spacer for clarity while printing
	output += "\n-------------------- \n ";
	return output;
}

std::string Teacher::GetRole() const {
	return "Teacher";
}