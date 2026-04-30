#pragma once
#include <string>
#include "date.h"

class User {
public:
	User(const std::string& _email, const std::string& _password, const std::string& _name,
		const std::string& _surname, const Date& _dob);

	virtual ~User(); // only for this

	std::string GetName() const;
	std::string GetSurname() const;
	std::string GetEmail() const;
	std::string GetPassword() const;
	Date GetDob() const;
	
	void SetEmail(const std::string& email);
	void SetPassword(const std::string& password);
	void SetName(const std::string& name);
	void SetSurname(const std::string& surname);
	void SetDob(const Date& dob);
	
	std::string ToString() const;
	std::string PrepareForDatabase() const;
	void updateUser(const std::string& email, const std::string& password, const std::string& name, const std::string& surname, const Date& dob);


<<<<<<< Updated upstream
=======
>>>>>>> Stashed changes

private:
	std::string m_email;
	std::string m_password;
	std::string m_name;
	std::string m_surname;
	Date m_dob;
};