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
	return database_line;

}