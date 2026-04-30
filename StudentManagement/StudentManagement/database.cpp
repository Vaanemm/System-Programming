#include "database.h"

#include <fstream>
#include <sstream>
#include <vector>

std::string read() {
	std::ifstream file("database.txt");
	std::string content;
	content = "nothing yet";
	if (file.is_open())
	{	
		// We use a buffer here because it is faster and it lets us load everything in one go
		std::stringstream buffer;
		buffer << file.rdbuf(); // read entire file
		content = buffer.str();
	}
	return content;
}

void write(const std::string& content) {
	std::ofstream file("database.txt");
	if (file.is_open())
	{	
		file << content;
	}
}

void write2(const std::vector<std::shared_ptr<Student>>& stud_list) {
	std::ofstream file("database.txt");
	if (file.is_open()) {
		// we add const & in the for loop so the shared pointers doesnt increment its ammount of pointings
		for (const auto& student : stud_list) {
			file << student->PrepareForDatabase();
		}
	}
	file.close();
}