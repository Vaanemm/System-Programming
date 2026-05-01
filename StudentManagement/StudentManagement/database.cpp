#include "database.h"

#include <fstream>
#include <sstream>
#include <vector>

std::string Database::Read() {
	std::ifstream file("database.csv");
	if (!file.is_open()) return "nothing yet";

	std::string line;
	std::getline(file, line); // skips the header because puts the pointer to next line, here we don't do anything with the line

	std::stringstream buffer;
	buffer << file.rdbuf(); // read entire file
	return buffer.str();
}

void Database::Write(const std::string& content) {
	std::ofstream file("database.csv");
	if (file.is_open())
	{	
		file << content;
	}
}

void Database::Write(const std::vector<std::shared_ptr<Student>>& stud_list) { //overloading
	std::ofstream file("database.csv");
	if (file.is_open()) {
		file << "Surname, Name, E-mail, Password, Date Of Birth\n";
		// we add const & in the for loop so the shared pointers doesnt increment its ammount of pointings
		for (const auto& student : stud_list) {
			file << student->PrepareForDatabase();
		}
	}
	file.close();
}

std::shared_ptr<User> Database::FindUser(const std::string _email, const std::string _password) {
	std::ifstream file("database.csv");
	std::string line;

	if (!file.is_open()) {
		return nullptr;
	}

	std::getline(file, line); // skip header

	while (std::getline(file, line)) {
		std::stringstream ss(line); //this splits the line with commas
		std::string surname, name, email, password, dob_str;
		

		std::getline(ss, surname, ',');
		std::getline(ss, name, ',');
		std::getline(ss, email, ',');
		std::getline(ss, password, ',');
		std::getline(ss, dob_str); //it will read until the end of the line

		if (email == _email && password == _password) {
			Date dob(dob_str);
			std::shared_ptr<User> user_ptr = std::shared_ptr<User>(new User(email, password, name, surname, dob));
			return user_ptr;
		}
	}

	return nullptr; //no match
}