#pragma once
#include "assignment.h"

class Submission {
public:
	Submission(int _grade, std::string _description, std::shared_ptr<Assignment> _assignment, std::string _student_email, std::string _file_path = "");

	std::string GetAssignment() const;
	std::string GetDescription() const;
	std::string GetStudentEmail() const;
	std::string GetFilePath() const;
	std::string ToString() const;  
	int GetGrade() const;
	void SetGrade(int _grade);
	void SetDescription(std::string _content);


private:
	std::shared_ptr<Assignment> m_assignment;
	std::string m_description;
	std::string m_student_email;
	std::string m_file_path;
	int m_grade;
};