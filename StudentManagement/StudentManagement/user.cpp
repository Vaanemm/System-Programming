#include "user.h"

User::User(const std::string& _email, const std::string& _password,
	const std::string& _name, const std::string& _surname,
	const Date& _dob)
	: m_email(_email), m_password(_password), m_name(_name),
	m_surname(_surname), m_dob(_dob)
{
}

User::~User() {
	// Cleanup logic if needed
}

std::string User::GetName() const {
	return m_name;
}

std::string User::GetSurname() const {
	return m_surname;
}

std::string User::GetEmail() const {
	return m_email;
}

std::string User::GetPassword() const {
	return m_password;
}

Date User::GetDob() const {
	return m_dob;
}

std::string User::GetDobString() const {
	return m_dob.ToString();
}

std::string User::ToString() const {
	std::string output;
	output = "User information: \n";
	output += "First name: " + GetName();
	//spacer for clarity while printing
	output += "\n -------------------- \n";
	return output;
}

std::string User::PrepareForDatabase() const {
	std::string database_line;
	database_line += GetName() + ", ";
	database_line += GetSurname() + ", ";
	database_line += GetEmail() + ", ";
	database_line += GetPassword() + ", ";
	database_line += GetDobString() + ",";
	return database_line;
}

void User::updateUser(const std::string& email, const std::string& password,
	const std::string& name, const std::string& surname, const Date& dob)
{
	SetEmail(email);
	SetPassword(password);
	SetName(name);
	SetSurname(surname);
	SetDob(dob);
}

void User::SetEmail(const std::string& email) {
	m_email = email;
}

void User::SetPassword(const std::string& password) {
	m_password = password;
}

void User::SetName(const std::string& name) {
	m_name = name;
}

void User::SetSurname(const std::string& surname) {
	m_surname = surname;
}

void User::SetDob(const Date& dob) {
	m_dob = dob;
}
