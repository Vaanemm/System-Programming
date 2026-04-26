#include "submission.h"
#include "assignment.h"
#include <iostream>

Submission::Submission(Assignment* _assignment) :
	m_assignment(_assignment), m_content(""), m_grade(-1) {}

std::string Submission::GetContent() const {
	return m_content;
}

std::string Submission::GetAssignment() const {

	if (m_assignment != nullptr) { // have to see if it exists
		return m_assignment->GetName();
	}
	return "No teacher assigned";
}

std::string Submission::ToString() const {
	std::string output;
	output = "Submission: \n";
	output += "Assignment name: " + GetAssignment() + "\n";
	output += "Content: " + GetContent() + "\n";
	output += "Grade: " + std::to_string(m_grade) + "\n";
	return output;
}