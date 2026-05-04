#include "database.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
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

std::shared_ptr<User> Database::FindUser(const std::string& _email, const std::string& _password, const bool _for_login) {
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

				// here we add the students classes he follows
				std::ifstream enroll_file("enrollment.csv");
				std::string enroll_line;
				if (enroll_file.is_open()) {
					while (std::getline(enroll_file, enroll_line)) {
						if (enroll_line.empty()) continue;

						std::stringstream ss_enroll(enroll_line);
						std::string sub_name, teach_email, stud_email;

						std::getline(ss_enroll, sub_name, ',');
						std::getline(ss_enroll, teach_email, ',');
						std::getline(ss_enroll, stud_email);

						if (stud_email == email) {
							SubjectName subject_name = StringToSubjectName(sub_name);

							auto teacher = std::dynamic_pointer_cast<Teacher>(Database::FindUser(teach_email, " ", false));

							// 3. Create the Subject and add it to the student
							auto new_sub = std::make_shared<Subject>(subject_name, teacher);
							stud_ptr->AddSubject(new_sub);
						}
					}
					enroll_file.close();
				}

				return stud_ptr;
			}
			else if (role == "Teacher") {
				std::shared_ptr<Teacher> teach_ptr = std::shared_ptr<Teacher>(new Teacher(email, password, name, surname, dob));
				return teach_ptr;
			}
			else if (role == "Parent") {
				auto child_ptr = std::dynamic_pointer_cast<Student>(Database::FindUser(child, " ", false));
				std::shared_ptr<Parent> par_ptr = std::shared_ptr<Parent>(new Parent(email, password, name, surname, dob, child_ptr));
				return par_ptr;
			}
			else {
				std::shared_ptr<User> user_ptr = std::shared_ptr<User>(new User(email, password, name, surname, dob));
				return user_ptr;
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
		std::string user_name = user->GetEmail();
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

void Database::SaveEnrollment(const std::string& subject_name, const std::string& teacher_email, const std::string& student_email) {
	std::ofstream outFile("enrollment.csv", std::ios::app);
	if (outFile.is_open()) {
		outFile << subject_name << "," << teacher_email << "," << student_email << "\n";
		outFile.close();
	}
	else {
		std::cerr << "Error: Could not open enrollment.csv for appending." << std::endl;
	}
}

void Database::SaveTeacherForSubject(const std::string& subject_name, const std::string& teacher_email) {
	std::ifstream file_in("enrollment.csv");
	std::ostringstream ChangedInfo;
	std::string line;
	if (!file_in.is_open()) return;

	std::getline(file_in, line);
	ChangedInfo << line << "\n";

	while (std::getline(file_in, line)) {
		std::stringstream ss(line);
		std::string subject, teacher, student;
		std::getline(ss, subject, ',');
		std::getline(ss, teacher, ',');
		std::getline(ss, student, ',');

		if (subject == subject_name) {
			std::string new_line = subject_name + "," + teacher_email + ",";
			ChangedInfo << new_line << "\n";
		}
		else {
			ChangedInfo << line << "\n";
		}
	}
	file_in.close();

	std::ofstream file_out("enrollment.csv");
	file_out << ChangedInfo.str();
	file_out.close();
}

void Database::SaveAssignment(const std::string& subject_name, const std::string& title, const std::string& description)
{
	std::ofstream file("assignments.csv", std::ios::app);
	if (file.is_open()) {
		file << subject_name << "," << title << "," << description << "\n";
		file.close();
	}
}

std::vector<std::tuple<std::string, std::string, std::string>> Database::GetAllAssignments()
{
	std::vector<std::tuple<std::string, std::string, std::string>> assignments;
	std::ifstream file("assignments.csv");
	std::string line;
	if (!file.is_open()) return {};

	while (std::getline(file, line)) {
		if (line.empty()) continue;
		std::stringstream ss(line);
		std::string subject, name, description;
		std::getline(ss, subject, ',');
		std::getline(ss, name, ',');
		std::getline(ss, description);
		assignments.push_back({ subject, name, description });
	}
	return assignments;
}

void Database::UpdateUserInDatabase(const std::shared_ptr<User>& updated_user, const std::string& original_email) {
	std::ifstream file_in("database.csv");
	std::ostringstream ChangedInfo;
	std::string line;
	if (!file_in.is_open()) return;

	std::getline(file_in, line);
	ChangedInfo << line << "\n";

	while (std::getline(file_in, line)) {
		std::stringstream ss(line);
		std::string surname, name, email;
		std::getline(ss, surname, ',');
		std::getline(ss, name, ',');
		std::getline(ss, email, ',');

		if (email == original_email) {
			ChangedInfo << updated_user->PrepareForDatabase();
		}
		else {
			ChangedInfo << line << "\n";
		}
	}
	file_in.close();

	std::ofstream file_out("database.csv");
	file_out << ChangedInfo.str();
	file_out.close();
}

std::vector<SubjectTeacher> Database::GetAllSubjects() {
	std::set<SubjectTeacher> unique_pairs;  //this will take all the names once
	std::ifstream file_in("enrollment.csv"); 
	std::string line;

	if (!file_in.is_open()) {
		return {};
	}

	while (std::getline(file_in, line)) {
		if (line.empty()) continue;

		std::stringstream ss(line);
		std::string subject, teacher, student;

		std::getline(ss, subject, ',');
		std::getline(ss, teacher, ',');
		std::getline(ss, student);   

		unique_pairs.insert({ subject, teacher });
	}
	return std::vector<SubjectTeacher>(unique_pairs.begin(), unique_pairs.end());
}

bool Database::CheckUserInSubject(const std::string& subjects_name, const std::string& students_email) {
	std::ifstream file("enrollment.csv");
	std::string line;

	if (!file.is_open()) {
		std::cout << "enrollment couldn't open" << std::endl;
	}

	while (std::getline(file, line)) {
		if (line.empty()) continue;

		std::stringstream ss(line);
		std::string subject, teacher, student;

		std::getline(ss, subject, ',');
		std::getline(ss, teacher, ',');
		std::getline(ss, student);

		if (subject == subjects_name && student == students_email) {
			file.close();
			return true; // Match found
		}
	}
	return false;
}

bool Database::CheckTeacherEmptyInSubject(const std::string& subjects_name) {
	std::ifstream file("enrollment.csv");
	std::string line;

	if (!file.is_open()) {
		std::cout << "enrollment couldn't open" << std::endl;
	}

	while (std::getline(file, line)) {
		if (line.empty()) continue;

		std::stringstream ss(line);
		std::string subject, teacher, student;

		std::getline(ss, subject, ',');
		std::getline(ss, teacher, ',');
		std::getline(ss, student);

		if (subject == subjects_name && (teacher == " " || teacher.empty())) {
			file.close();
			return true; // Match found
		}
	}
	return false;
}