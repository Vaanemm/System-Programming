#pragma once
#include "assignment.h"

class Submission {
public:
	Submission(int _grade, std::string _description, std::shared_ptr<Assignment> _assignment);

	std::string GetAssignment() const;
	std::string GetDescription() const;
	std::string ToString() const;
	void SetGrade(int _grade);
	void SetDescription(std::string _content);


private:
	std::shared_ptr<Assignment> m_assignment;
	std::string m_description;
	int m_grade;
};