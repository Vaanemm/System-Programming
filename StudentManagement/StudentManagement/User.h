#pragma once
#include <string>

class User {
public:
	User(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob)
		: m_email(_email), m_password(_password), m_name(_name), m_surname(_surname), m_dob(_dob)

	virtual ~User(); // only for this

		std::string GetName() const;
		std::string GetSurname() const;
		std::string GetEmail() const;
		std::string GetPassword() const;
		Date GetDob() const;

	std::string toString();

private:
	std::string m_email;
	std::string m_password;
	std::string m_name;
	std::string m_surname;
	std::string m_dob
};