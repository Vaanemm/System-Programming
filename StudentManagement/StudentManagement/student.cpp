#include "student.h"

Student::Student(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob)
	: User(_email, _password, _name, _surname, _dob) {}

const std::vector<std::shared_ptr<Subject>>& Student::GetSubjects() const {
	return m_subjects;
}

std::string Student::GetRole() const {
	return "Student";
}

void Student::AddSubject(std::shared_ptr<Subject> subject) {
	m_subjects.push_back(subject);
}

std::string Student::ToString() const {
	std::string output;
	output = "User information: \n";
	output += "First name: " + GetName() + "\n";
	output += "Subjects:";
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
	output += "\n -------------------- \n";
	return output;
}