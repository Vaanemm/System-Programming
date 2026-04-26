#include "school.h"
#include "student.h"
#include "teacher.h"
#include "parent.h"
#include <vector>


void School::AddStudent(const Student& student) {
	// add a unique pointer to student in the students vector
	students.push_back(std::make_unique<Student>(student));
}

void School::AddTeacher(const Teacher& teacher) {
	// add a unique pointer to teacher in the teachers vector
	teachers.push_back(std::make_unique<Teacher>(teacher));
}

void School::AddParent(const Parent& parent) {
	// add a unique pointer to teacher in the teachers vector
	parents.push_back(std::make_unique<Parent>(parent));
}

User* School::FindUser(const std::string& email, const std::string& password) {
	for (auto& student : students) {
		if (student->GetEmail() == email && student->GetPassword() == password) {
			return student.get();
		}
	} 

	for (auto& teacher : teachers) {
		if (teacher->GetEmail() == email && teacher->GetPassword() == password) {
			return teacher.get();
		}
	}

	for (auto& parent : parents) {
		if (parent->GetEmail() == email && parent->GetPassword() == password) {
			return parent.get();
		}
	}

	return nullptr; 
}

User* School::GetCurrentUser() {
	return m_current_user;
}

void School::SetCurrentUser(User* user) {
	m_current_user = user;
}