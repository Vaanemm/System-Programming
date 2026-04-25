#include <string>

class User {
public:
	User(const std::string& email, const std::string& password)
		: email(email), password(password)
	{
	}
	std::string toString();

private:
	std::string email;
	std::string password;
};