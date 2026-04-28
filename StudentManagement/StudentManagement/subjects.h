#pragma once
#include "teacher.h"
#include <memory>

class Assignment; //bc we included in assignment subjects, so else it loops around and bugs

enum class SubjectName : int {
	Mathematics = 1, Biology = 2, Chemistry = 3, Physics = 4, Dutch = 5, Sports = 6
}; // we use integers so if we change the name of a course, it has no impact

class Subject : public std::enable_shared_from_this<Subject> { // this is bc i need the shared ptr of subject in MakeAssignment
public:
	Subject(SubjectName _name, std::shared_ptr<Teacher> _teacher);

	~Subject();

	std::string GetName() const;
	Teacher* GetTeacher() const;
	std::string ToString() const;
	void MakeAssignment(std::string _name, std::string _description);
	std::string SubjectAssignmentToString() const;

private:
	SubjectName m_name;
	std::shared_ptr<Teacher> m_teacher;
	std::vector<std::unique_ptr<Assignment>> m_assignments_ptr;
};