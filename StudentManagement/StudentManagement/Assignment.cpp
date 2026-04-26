#include <Assignment.h>

Assignment::Assignment(std::string _name, Subject* _subject):
	m_name(_name), m_subject(_subject){}

std::string Subject::GetSubject() const {
	if (m_teacher != nullptr) { // have to see if it exists
		return m_teacher->GetName();
	}
	return "No teacher assigned";
}