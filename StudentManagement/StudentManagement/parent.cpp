#include "parent.h"

Parent::Parent(const std::string& _email,
	const std::string& _password,
	const std::string& _name,
	const std::string& _surname,
	const Date& _dob,
	std::shared_ptr<Student> _student)
	: User(_email, _password, _name, _surname, _dob),// this goes to user class
	m_student(std::move(_student)) {}//specific to student class)

Student* Parent::GetStudent() const { // we do it like that so that the parent still has the child, we just want to see the student
	return m_student.get();
}

std::string Parent::ToString() const {
	std::string output;
	output = "User information: \n";
	output += "First name: " + GetName() + "\n";
	output += "His child is: " + GetStudent()->GetName();
	return output;
}