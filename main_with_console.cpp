// Student Management System (Console Version)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ---- Date ----

class Date {
public:
	int day;
	int month;
	int year;
};

// ---- SubjectName enum ----

enum class SubjectName {
	Wiskunde,
	Biologie,
	Chemie,
	Fysica,
	Nederlands,
	LichaamelijkeOpvoeding
};

// Helper function to convert SubjectName to a readable string
string subjectToString(SubjectName name) {
	switch (name) {
	case SubjectName::Wiskunde:               return "Wiskunde";
	case SubjectName::Biologie:               return "Biologie";
	case SubjectName::Chemie:                 return "Chemie";
	case SubjectName::Fysica:                 return "Fysica";
	case SubjectName::Nederlands:             return "Nederlands";
	case SubjectName::LichaamelijkeOpvoeding: return "Lichamelijke Opvoeding";
	default:                                  return "Anderen";
	}
}

// ---- User ----

class User {
public:
	User(const string& email, const string& password, const string& name, const string& surname, const Date& dateOfBirth) {
		m_email = email;
		m_password = password;
		m_name = name;
		m_surname = surname;
		m_dateOfBirth = dateOfBirth;
	}

	string getName()        const { return m_name; }
	string getSurname()     const { return m_surname; }
	string getEmail()       const { return m_email; }
	string getPassword()    const { return m_password; }
	Date   getDateOfBirth() const { return m_dateOfBirth; }

	void setName(const string& name) { m_name = name; }
	void setSurname(const string& surname) { m_surname = surname; }
	void setEmail(const string& email) { m_email = email; }
	void setPassword(const string& password) { m_password = password; }
	void setDateOfBirth(const Date& dob) { m_dateOfBirth = dob; }

	void printInfo() {
		cout << "The data of " << m_name << " " << m_surname << endl;
		cout << "Email:      " << m_email << endl;
		cout << "Born on:    " << m_dateOfBirth.day << "/" << m_dateOfBirth.month << "/" << m_dateOfBirth.year << endl;
	}

private:
	string m_email;
	string m_password;
	string m_name;
	string m_surname;
	Date   m_dateOfBirth;
};

// ---- Teacher ----

class Teacher : public User {
public:
	Teacher(const string& email, const string& password, const string& name, const string& surname, const Date& dateOfBirth)
		: User(email, password, name, surname, dateOfBirth) {}

	void printInfo() {
		cout << "Profile type: Teacher" << endl;
		User::printInfo();
	}

	// Overloading << so we can use cout << teacher directly
	friend ostream& operator<<(ostream& os, const Teacher& teacher) {
		os << "Profile type: Teacher" << endl;
		os << "The data of " << teacher.getName() << " " << teacher.getSurname() << endl;
		os << "Email:      " << teacher.getEmail() << endl;
		os << "Born on:    " << teacher.getDateOfBirth().day << "/" << teacher.getDateOfBirth().month << "/" << teacher.getDateOfBirth().year << endl;
		os << "       " << endl;
		os << "-----------------" << endl;
		os << "       " << endl;
		return os;
	}
};

// ---- Subject ----
// One subject has one name and one teacher - enforced by the constructor

class Subject {
public:
	Subject(SubjectName name, Teacher* teacher) {
		m_name = name;
		m_teacher = teacher;
	}

	SubjectName getName()    const { return m_name; }
	Teacher* getTeacher() const { return m_teacher; }

private:
	SubjectName m_name;
	Teacher* m_teacher;
};

// ---- Student ----

class Student : public User {
public:
	Student(const string& email, const string& password, const string& name, const string& surname, const Date& dateOfBirth)
		: User(email, password, name, surname, dateOfBirth) {}

	void addSubject(const Subject& subject) {
		m_subjects.push_back(subject);
	}

	void deleteSubject(SubjectName name) {
		for (int i = 0; i < m_subjects.size(); i++) {
			if (m_subjects[i].getName() == name) {
				m_subjects.erase(m_subjects.begin() + i);
				return;
			}
		}
	}

	void printInfo() {
		cout << "Profile type: Student" << endl;
		User::printInfo();
	}

	// Overloading << so we can use cout << student directly
	friend ostream& operator<<(ostream& os, const Student& student) {
		os << "Profile type: Student" << endl;
		os << "The data of " << student.getName() << " " << student.getSurname() << endl;
		os << "Email:      " << student.getEmail() << endl;
		os << "Born on:    " << student.getDateOfBirth().day << "/" << student.getDateOfBirth().month << "/" << student.getDateOfBirth().year << endl;
		os << "Subjects:" << endl;
		for (int i = 0; i < student.m_subjects.size(); i++) {
			os << "  - " << subjectToString(student.m_subjects[i].getName());
			os << " (teacher: " << student.m_subjects[i].getTeacher()->getName() << " " << student.m_subjects[i].getTeacher()->getSurname() << ")" << endl;
		}
		os << "       " << endl;
		os << "-----------------" << endl;
		os << "       " << endl;

		return os;
	}

private:
	vector<Subject> m_subjects;
};

// ---- Main ----
int main()
{
	Date dob;
	dob.day = 15; dob.month = 6; dob.year = 2000;

	Teacher teacher1("cpp@school.com", "tpass1", "Nastaran", "Nourbakhsh", dob);
	Teacher teacher2("filters@school.com", "tpass2", "Gerd", "Vandersteen", dob);

	Subject wiskunde(SubjectName::Wiskunde, &teacher1);
	Subject biologie(SubjectName::Biologie, &teacher2);
	Subject fysica(SubjectName::Fysica, &teacher1);

	Student student1("vlad@email.com", "pass123", "vladi", "slav", dob);
	Student student2("Kobe@email.com", "pass456", "Kobe", "Van Craenenbroeck", dob);
	Student student3("Allan@email.com", "pass789", "Allan", "Vériter", dob);

	student1.addSubject(wiskunde);
	student1.addSubject(biologie);
	student2.addSubject(biologie);
	student2.addSubject(fysica);
	student3.addSubject(wiskunde);

	cout << "=== All People ===" << endl;
	cout << teacher1;
	cout << teacher2;
	cout << student1;
	cout << student2;
	cout << student3;

	student2.setName("Vladislav");
	student2.setSurname("Andruétan");
	student2.setEmail("Vladislav@email.com");

	cout << "\n=== After Editing Student 2 ===" << endl;
	cout << student2;

	cout << "\nPress Enter to exit...";
	cin.get(); // Waits for you to press Enter

	return 0;
}