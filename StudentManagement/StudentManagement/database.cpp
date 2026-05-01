#include "database.h"

#include <fstream>
#include <sstream>
#include <vector>

std::string read() {
	std::ifstream file("database.csv");
	if (!file.is_open()) return "nothing yet";

	std::string line;
	std::getline(file, line); // skips the header because puts the pointer to next line, here we don't do anything with the line

	std::stringstream buffer;
	buffer << file.rdbuf(); // read entire file
	return buffer.str();
}

void write(const std::string& content) {
	std::ofstream file("database.csv");
	if (file.is_open())
	{	
		file << content;
	}
}

void write2(const std::vector<std::shared_ptr<Student>>& stud_list) {
	std::ofstream file("database.csv");
	if (file.is_open()) {
		file << "Surname, Name, E-mail, Password\n";
		// we add const & in the for loop so the shared pointers doesnt increment its ammount of pointings
		for (const auto& student : stud_list) {
			file << student->PrepareForDatabase();
		}
	}
	file.close();
}