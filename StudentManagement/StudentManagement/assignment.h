#pragma once
#include <iostream>
#include "subjects.h"
#include "teacher.h"

class Assignment {
public:
	Assignment(std::string _name, std::string _description, std::unique_ptr<Subject> _subject);

	std::string GetName() const;
	std::string GetTeacher() const;
	std::string ToString() const;


private:
	std::string m_name;
	std::string m_description;
	std::unique_ptr<Subject> m_subject;
	Teacher* m_teacher;
};