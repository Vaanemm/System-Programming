#include "subjects.h"

Subject::Subject(SubjectName _name, Teacher* _teacher) :
	m_name(_name), m_teacher(_teacher) {}

Subject::~Subject() {

}

std::string Subject::GetName() const {
	switch (m_name) {
	case SubjectName::Mathematics: return "Mathematics";
	case SubjectName::Biology: return "Biology";
	case SubjectName::Chemistry: return "Chemistry";
	case SubjectName::Dutch: return "Dutch";
	case SubjectName::Physics: return "Physics";
	case SubjectName::Sports: return "Sports";
	default: return "Unknown subject"; // maybe m_name is wrong
	}
}

Teacher* Subject::GetTeacher() const {
	return m_teacher;
}

std::string Subject::ToString() const {
	std::string output;
	output += "Subject information: \n";
	output += "Subject name: " + GetName() + "\n";
	output += "with teacher: " + GetTeacher()->GetName();
	return output;
}