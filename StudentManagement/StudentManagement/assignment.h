#pragma once
#include <iostream>
#include "teacher.h"

class Subject;
class Submission;

class Assignment : public std::enable_shared_from_this<Assignment> {
public:
	Assignment(std::string _name, std::string _description, std::shared_ptr<Subject> _subject);

	std::string GetName() const;
	std::string GetDescription() const;
	std::string GetTeacher() const;
	std::string ToString() const;

	void MakeSubmission(int _grade, std::string _description);
	std::string AssignmentSubmissionToString() const;


private:
	std::string m_name;
	std::string m_description;
	std::shared_ptr<Subject> m_subject;
	Teacher* m_teacher;
	std::vector<std::unique_ptr<Submission>> m_submissions_ptr;
};