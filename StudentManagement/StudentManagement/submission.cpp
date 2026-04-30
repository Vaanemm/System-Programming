#include "submission.h"
#include <iostream>


Submission::Submission(int _grade, std::string _description, std::shared_ptr<Assignment> _assignment) :
	m_assignment(_assignment), m_description(_description), m_grade(_grade) {}

std::string Submission::GetDescription() const {
	return m_description;
}

std::string Submission::GetAssignment() const {

	if (m_assignment != nullptr) { // have to see if it exists
		return m_assignment->GetName();
	}
	return "No teacher assigned";
}

void Submission::SetGrade(int _grade) {
	m_grade = _grade;
}

void Submission::SetDescription(std::string _description) {
	m_description = _description;
}

std::string Submission::ToString() const {
	std::string output;
	output = "Submission: \n";
	output += "Assignment name: " + GetAssignment() + "\n";
	output += "Content: " + GetDescription() + "\n";
	output += "Grade: " + std::to_string(m_grade) + "\n";
	//spacer for clarity while printing
	output += " -------------------- \n";

	return output;
}