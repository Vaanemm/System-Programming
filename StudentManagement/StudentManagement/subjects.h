#pragma once
#include "teacher.h"

enum class SubjectName : int {
	Mathematics = 1, Biology = 2, Chemistry = 3, Physics = 4, Dutch = 5, Sports = 6
}; // we use integers so if we change the name of a course, it has no impact

class Subject {
public:
	Subject(SubjectName _name, std::unique_ptr<Teacher> _teacher);

	~Subject();

	std::string GetName() const;
	Teacher* GetTeacher() const;
	std::string ToString() const;

private:
	SubjectName m_name;
	std::unique_ptr<Teacher> m_teacher;
};