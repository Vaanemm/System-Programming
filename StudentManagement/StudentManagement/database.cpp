#include "database.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "parent.h"

std::string Database::Read() {

	std::ifstream file("database.csv");
	if (!file.is_open()) return "nothing yet";

	std::string line;
	std::getline(file, line); // skips the header because puts the pointer to next line, here we don't do anything with the line

	std::stringstream buffer;
	buffer << file.rdbuf(); // read entire file
	return buffer.str();
}

void Database::Write(const std::vector<std::shared_ptr<Student>>& stud_list) { //overloading
	std::ofstream file("database.csv");
	if (file.is_open()) {
		file << "Surname, Name, E-mail, Password, Date Of Birth, Role, (Child)\n";
		// we add const & in the for loop so the shared pointers doesnt increment its ammount of pointings
		for (const auto& user : stud_list) {
			file << user->PrepareForDatabase();
		}
	}
	file.close();
}

std::shared_ptr<User> Database::FindUser(const std::string _email, const std::string _password, const bool _for_login) {
	std::ifstream file("database.csv");
	std::string line;

	if (!file.is_open()) {
		return nullptr;
	}

	std::getline(file, line); // skip header

	while (std::getline(file, line)) {
		std::stringstream ss(line); //this splits the line with commas
		std::string surname, name, email, password, dob_str, role, child;


		std::getline(ss, surname, ',');
		std::getline(ss, name, ',');
		std::getline(ss, email, ',');
		std::getline(ss, password, ',');
		std::getline(ss, dob_str, ','); //it will read until the end of the line
		std::getline(ss, role, ',');
		std::getline(ss, child);
		Date dob(dob_str);

		bool is_valid;
		if (_for_login == true) {
			is_valid = (email == _email && password == _password);
		}
		else {
			is_valid = (email == _email);
		}

		if (is_valid) {
			if (role == "Student") {
				std::shared_ptr<Student> stud_ptr = std::shared_ptr<Student>(new Student(email, password, name, surname, dob));
				return stud_ptr;
			}
			else if (role == "Teacher") {
				std::shared_ptr<Teacher> teach_ptr = std::shared_ptr<Teacher>(new Teacher(email, password, name, surname, dob));
				return teach_ptr;
			}
			else if (role == "Parent") {
				std::shared_ptr<Parent> par_ptr = std::shared_ptr<Parent>(new Parent(email, password, name, surname, dob, nullptr));
				return par_ptr;
			}
			else {
				return std::make_shared<User>(email, password, name, surname, dob);				
			}
		}	
	}
	return nullptr; //no match
}

//what is the naming convention for functions that are not in a class?? its still a public function i think
void Database::SendEmail(const Mail& mail) {
	std::ofstream file_stream;
	file_stream.open("mails.csv", std::ios::app);
	if (file_stream.is_open()) {
		std::string new_email;
		new_email = mail.GetSender() + ",";
		new_email += mail.GetReceiver() + ",";
		new_email += mail.GetSubject() + ",";
		new_email += mail.GetText() + "\n";
		file_stream << new_email;
	}
	return;
}

bool Database::AddUser(const std::shared_ptr<User>& user) {
	std::ofstream file("database.csv", std::ios::app);

	if (file.is_open()) {
		std::string user_name = user->GetName();
		std::shared_ptr<User> new_user = FindUser(user_name, " ", false);

		if (new_user == nullptr) {
			file << user->PrepareForDatabase();
			return true;
		}
		else {
			QMessageBox::critical(nullptr, "Error", "This e-mail is already taken");
			return false;
		}
		
	}
	else {
		QMessageBox::critical(nullptr, "Error", "Could not open database to add student.");
		return false;
	}
}

void Database::SaveEnrollment(const std::shared_ptr<Subject>& _subject) {
	std::string target_subject = _subject->GetName();
	std::vector<std::string> lines_to_keep;
	std::string line;

	// we first read the whole file and keep the lines that we want to modify
	std::ifstream inFile("enrollment.csv");
	if (inFile.is_open()) {
		while (std::getline(inFile, line)) {
			if (line.find(target_subject + ",") != 0) { // if its not the subject we're changing
				lines_to_keep.push_back(line);
			}
		}
		inFile.close();
	}

	// now we rewrite every line with the subjects of subject
	std::ofstream outFile("enrollment.csv", std::ios::trunc);
	if (outFile.is_open()) {
		for (const auto& old_line : lines_to_keep) { //write the lines we don't change
			outFile << old_line << "\n";
		}

		for (const std::string& student : _subject->GetEnrolledStudents()) { // write all the subject
			outFile << target_subject << "," << student << "\n";
		}

		outFile.close();
	}
}

void Database::UpdateUserInDatabase(const std::shared_ptr<User>& updated_user, const std::string& original_email) {
	std::ifstream file_in("database.csv");
	std::ostringstream buffer;
	std::string line;
	if (!file_in.is_open()) return;

	std::getline(file_in, line);
	buffer << line << "\n";

	while (std::getline(file_in, line)) {
		std::stringstream ss(line);
		std::string surname, name, email;
		std::getline(ss, surname, ',');
		std::getline(ss, name, ',');
		std::getline(ss, email, ',');

		if (email == original_email) {
			buffer << updated_user->PrepareForDatabase();
		}
		else {
			buffer << line << "\n";
		}
	}
	file_in.close();

	std::ofstream file_out("database.csv");
	file_out << buffer.str();
	file_out.close();
}