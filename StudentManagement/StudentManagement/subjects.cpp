#include "subjects.h"
#include "assignment.h" // here we have to inlcude because we use it!
#include "submission.h"

Subject::Subject(SubjectName _name, std::shared_ptr<Teacher> _teacher) :
	m_name(_name), m_teacher(_teacher) {} // have to move because unique ptr!

SubjectName StringToSubjectName(const std::string& name) {
	if (name == "Mathematics") return SubjectName::Mathematics;
	if (name == "Biology")     return SubjectName::Biology;
	if (name == "Chemistry")   return SubjectName::Chemistry;
	if (name == "Physics")     return SubjectName::Physics;
	if (name == "Dutch")       return SubjectName::Dutch;
	if (name == "Sports")      return SubjectName::Sports;
	return SubjectName::Mathematics; // Default fallback
}

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
	//spacer for clarity while printing
	output += "\n -------------------- \n";
	return output;
}

void Subject::MakeAssignment(std::string _name, std::string _description) {
	std::shared_ptr<Assignment> m_assignment_ptr = std::shared_ptr<Assignment>(new Assignment(_name, _description, shared_from_this()));
	m_assignments_ptr.push_back(std::move(m_assignment_ptr));
}

std::string Subject::SubjectAssignmentToString() const{
	std::string output;
	for (const auto& assignment : m_assignments_ptr) { //here we give by reference just to print in the function
		output += assignment->ToString();
	}
	return output;
}

const std::vector<std::shared_ptr<Assignment>>& Subject::GetAssignments() const {
	return m_assignments_ptr;
}

void Subject::AddStudent(const std::string& _students_email) {
	m_students.push_back(_students_email);
}

const std::vector<std::string>& Subject::GetEnrolledStudents() const {
	return m_students;
}