#include <assignment.h>
#include "teacher.h"
#include "subjects.h"
#include "submission.h"


//constructor
Assignment::Assignment(std::string _name, std::string _description, std::shared_ptr<Subject> _subject) :
	m_name(_name), m_description(_description), m_subject(std::move(_subject)) {}

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

void Assignment::MakeSubmission(int _grade, std::string _description) {
	std::unique_ptr<Submission> m_submission_ptr = std::unique_ptr<Submission>(new Submission(_grade, _description, shared_from_this()));
	m_submissions_ptr.push_back(std::move(m_submission_ptr));
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

std::string Assignment::AssignmentSubmissionToString() const {
	std::string output;
	for (const auto& submission : m_submissions_ptr) { //here we give by reference just to print in the function
		output += submission->ToString();
	}
	return output;
}