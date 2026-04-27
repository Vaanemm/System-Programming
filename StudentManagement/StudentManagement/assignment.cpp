#include <assignment.h>
#include "teacher.h"
#include "subjects.h"
//constructor
Assignment::Assignment(std::string _name, std::string _description, Subject* _subject) :
	m_name(_name), m_description(_description), m_subject(_subject) {}

std::string Assignment::GetName() const {
	return m_name;
}

std::string Assignment::GetTeacher() const {
	Teacher* m_teacher = m_subject->GetTeacher();

	if (m_teacher != nullptr) { // have to see if it exists
		return m_teacher->GetName();
	}
	return "No teacher assigned";
}

std::string Assignment::ToString() const {
	std::string output;
	output = "Asssignment: \n";
	output += "Assignment name: " + GetName() + "\n";
	output += "Subject: " + m_subject->GetName() + "\n";
	output += "Description: " + m_description + "\n";
	output += "Teacher: " + GetTeacher();
	return output;
}