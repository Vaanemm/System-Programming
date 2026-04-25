#pragma once
#include <string>

class User {
public:
<<<<<<< HEAD
	User(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob);
		: email(_email), password(_password), name(_name), surname(_surname), dob(_dob)

	virtual ~User(); // only for this

		std::string GetName() const;
		std::string GetSurname() const;
		std::string GetEmail() const;
		std::string GetPassword() const;
		Date GetDob() const;
=======
	User(const std::string& email, const std::string& password)
		: email(email), password(password)
	{
	}
	std::string toString();
>>>>>>> 329605e7a3c6b9d81c204a059ab779946e4c964a

private:
	std::string m_email;
	std::string m_password;
	std::string m_name;
	std::string m_surname;
	std::string m_dob
};