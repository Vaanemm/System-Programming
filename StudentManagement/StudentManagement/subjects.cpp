#include "subjects.h"
#include "assignment.h" // here we have to inlcude because we use it!

Subject::Subject(SubjectName _name, std::shared_ptr<Teacher> _teacher) :
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

void Subject::MakeAssignment(std::string _name, std::string _description) {
	std::unique_ptr<Assignment> m_assignment_ptr = std::unique_ptr<Assignment>(new Assignment(_name, _description, shared_from_this()));
	m_assignments_ptr.push_back(std::move(m_assignment_ptr));
}

std::string Subject::SubjectAssignmentToString() const{
	std::string output;
	for (const auto& assignment : m_assignments_ptr) { //here we give by reference just to print in the function
		output += assignment->ToString();
	}
	return output;
}