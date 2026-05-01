#pragma once
#include <sstream>

struct Date {
	int day;
	int month;
	int year;

	Date() : day(0), month(0), year(0) {} // default

	Date(const std::string& str) {
		std::stringstream ss(str);
		std::string temp;

		std::getline(ss, temp, '/');
		day = temp.empty() ? 0 : std::stoi(temp); // temp is temporary variable
		// stoi is string to int

		std::getline(ss, temp, '/');
		month = temp.empty() ? 0 : std::stoi(temp);

		std::getline(ss, temp, '/');
		year = temp.empty() ? 0 : std::stoi(temp);
	}

	std::string ToString() const {
		return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
	}

};