#pragma once
#include <vector>
#include <memory>
#include "student.h"
#include "teacher.h"
#include "parent.h"

class School {
public:
	void AddStudent(const Student& student);
	void AddTeacher(const Teacher& teacher);
	void AddParent(const Parent& parent);

private:
	// 3 different vectors to prevent constant checking the type of user
	std::vector<std::unique_ptr<Student>> students;
	std::vector<std::unique_ptr<Teacher>> teachers;
	std::vector<std::unique_ptr<Parent>> parents;

};