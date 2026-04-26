#include <Assignment.h>
#include "teacher.h"
#include "subjects.h"

Assignment::Assignment(std::string _name, Subject* _subject) :
	m_name(_name), m_subject(_subject) {}

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
	output += "Teacher: " + GetTeacher();
	return output;
}