#include "subjects.h"

Subject::Subject(SubjectName _name, std::unique_ptr<Teacher> _teacher) :
	m_name(_name), m_teacher(std::move(_teacher)) {} // have to move because unique ptr!

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
	return m_teacher.get(); // gets from heap the teacher
}

std::string Subject::ToString() const {
	std::string output;
	output += "Subject information: \n";
	output += "Subject name: " + GetName() + "\n";
	output += "with teacher: " + GetTeacher()->GetName();
	return output;
}