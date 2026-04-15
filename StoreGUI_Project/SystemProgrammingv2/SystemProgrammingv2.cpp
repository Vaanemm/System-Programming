#include "SystemProgrammingv2.h"

#include <iostream>
#include <string>
#include <vector>

#include <QMessageBox>
#include <QtSql>

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
	case SubjectName::Wiskunde:                return "Wiskunde";
	case SubjectName::Biologie:                return "Biologie";
	case SubjectName::Chemie:                  return "Chemie";
	case SubjectName::Fysica:                  return "Fysica";
	case SubjectName::Nederlands:              return "Nederlands";
	case SubjectName::LichaamelijkeOpvoeding: return "Lichamelijke Opvoeding";
	default:                                   return "Anderen";
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

	virtual ~User() {}

	string getName()		const { return m_name; }
	string getSurname()		const { return m_surname; }
	string getEmail()		const { return m_email; }
	string getPassword()	const { return m_password; }
	Date getDateOfBirth()	const { return m_dateOfBirth; }
	
	void setName(const string& name) { m_name = name; }
	void setSurname(const string& surname) { m_surname = surname; }
	void setEmail(const string& email) { m_email = email; }
	void setPassword(const string& password) { m_password = password; }
	void setDateOfBirth(const Date& dob) { m_dateOfBirth = dob; }
	
	//void printInfo() {
		//cout << "The data of " << m_name << " " << m_surname << endl;
		//cout << "Email: " << m_email << endl;
		//cout << "Born on:    " << m_dateOfBirth.day << "/" << m_dateOfBirth.month << "/" << m_dateOfBirth.year << endl;
	//}
private:
	string m_email; 
	string m_password; 
	string m_name; 
	string m_surname; 
	Date m_dateOfBirth;
};

// ---- Teacher ----
class Teacher : public User {
public:
	Teacher(const string& email, const string& password, const string& name, const string& surname, const Date& dateOfBirth)
		: User(email, password, name, surname, dateOfBirth) {}
	
	//*void printInfo() {
		//cout << "Profile type: Teacher" << endl;
		//User::printInfo();
	//}

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
	Subject(SubjectName name, Teacher* teacher) : 
	m_name(name), m_teacher(teacher) {}
	
	SubjectName getName() const { return m_name; }
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
	
	const vector<Subject>& getSubjects() const { return m_subjects; }

	void addSubject(const Subject& subject) { 
		m_subjects.push_back(subject); }
	
	void deleteSubject(SubjectName name) {
		for (int i = 0; i < m_subjects.size(); i++) {
			if (m_subjects[i].getName() == name) {
				m_subjects.erase(m_subjects.begin() + i);
				return;
			}
		}
	}

	//void printInfo() {
		//cout << "Profile type: Student" << endl;
		//User::printInfo();
	//}

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

SystemProgrammingv2::SystemProgrammingv2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// Test Data van Allan
	Date dob;
	dob.day = 15; dob.month = 6; dob.year = 2000;

	static Teacher teacher1("cpp@school.com", "tpass1", "Nastaran", "Nourbakhsh", dob);
	static Teacher teacher2("filters@school.com", "tpass2", "Gerd", "Vandersteen", dob);

	static Subject wiskunde(SubjectName::Wiskunde, &teacher1);
	static Subject biologie(SubjectName::Biologie, &teacher2);
	static Subject fysica(SubjectName::Fysica, &teacher1);

	alleVakkenLijst.push_back(&wiskunde);
	alleVakkenLijst.push_back(&biologie);
	alleVakkenLijst.push_back(&fysica);

	static Student student1("test", "pas", "Vladi", "slav", dob);
	static Student student2("Kobe@email.com", "pass456", "Kobe", "Van Craenenbroeck", dob);
	static Student student3("Allan@email.com", "pass789", "Allan", "Vériter", dob);

	student1.addSubject(wiskunde);
	student1.addSubject(biologie);
	student2.addSubject(biologie);
	student2.addSubject(fysica);
	student3.addSubject(wiskunde);

	cout << "=== All People ===" << endl;
	cout << teacher1; cout << teacher2;
	cout << student1; cout << student2; cout << student3;

	student2.setName("Vladislav");
	student2.setSurname("Andruétan");
	student2.setEmail("abrakadakaka");

	cout << "\n=== After Editing Student 2 ===" << endl;
	cout << student2;

	studentenLijst[student1.getEmail()] = &student1;
	studentenLijst[student2.getEmail()] = &student2;
	studentenLijst[student3.getEmail()] = &student3;

	leerkrachtenLijst[teacher1.getEmail()] = &teacher1;
	leerkrachtenLijst[teacher2.getEmail()] = &teacher2;

	// --- Database met SQlite ---
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName("school_database.db");

	if (db.open()) {
		QSqlQuery query;
		query.exec("DROP TABLE IF EXISTS users");
		query.exec("DROP TABLE IF EXISTS subjects");
		query.exec("DROP TABLE IF EXISTS registrations");
		query.exec("CREATE TABLE users (Username TEXT, Password TEXT, Role TEXT, Name TEXT)"); // users
		query.exec("CREATE TABLE subjects (SubjectName TEXT PRIMARY KEY, TeacherEmail TEXT)"); // subject has a teacher
		query.exec("CREATE TABLE registrations (StudentEmail TEXT, SubjectName TEXT)"); // store students of a class

		vector<User*> gebruikers = { &teacher1, &teacher2, &student1, &student2, &student3 };

		for (User* u : gebruikers) {
			query.prepare("INSERT INTO users (Username, Password, Role, Name) VALUES (:user, :pass, :role, :name)");
			query.bindValue(":user", QString::fromStdString(u->getEmail()));
			query.bindValue(":pass", QString::fromStdString(u->getPassword()));
			query.bindValue(":name", QString::fromStdString(u->getName()));

			QString rol;
			if (Teacher* t = dynamic_cast<Teacher*>(u)) {
				rol = "Leerkracht";

				for (Subject* sub : alleVakkenLijst) {
					if (sub->getTeacher() == t) {
						QSqlQuery subQuery;
						subQuery.prepare("INSERT INTO subjects (Subjectname, TeacherEmail) VALUES (?,?) ");
						subQuery.addBindValue(QString::fromStdString(subjectToString(sub->getName())));
						subQuery.addBindValue(QString::fromStdString(t->getEmail()));
						subQuery.exec();
					}
				}

			}
			else if (Student* s = dynamic_cast<Student*>(u)) {
				rol = "Leerling";

				for (const Subject& sub : s->getSubjects()) {
					QSqlQuery regQuery;
					regQuery.prepare("INSERT INTO registrations (StudentEmail, SubjectName) VALUES (?,?)");
					regQuery.addBindValue(QString::fromStdString(s->getEmail()));
					regQuery.addBindValue(QString::fromStdString(subjectToString(sub.getName())));
					regQuery.exec();
				}
			}
			else {
				rol = "Onbekend";
			}

			query.bindValue(":role", rol);
			query.exec();
		}
	}

	// connectie met de knop login
	connect(ui.btnLogin, &QPushButton::clicked, this, &SystemProgrammingv2::on_btnLogin_clicked);
}

void SystemProgrammingv2::on_btnLogin_clicked() {
	QString user = ui.username->text();
	QString pass = ui.password->text();
	string stdUser = user.toStdString();

	QSqlQuery query;
	query.prepare("SELECT Role, Name FROM users WHERE Username = :user AND Password = :pass");
	query.bindValue(":user", user);
	query.bindValue(":pass", pass);

	if (query.exec() && query.next()) {
		QString role = query.value(0).toString();
		QString RealName = query.value(1).toString();

		if (role == "Leerling") {
			QSqlQuery subQuery;
			subQuery.prepare("SELECT SubjectName FROM registrations WHERE StudentEmail = :email");
			subQuery.bindValue(":email", user); // fill the mail in

			QStringList subjects;
			if (subQuery.exec()) {
				// we loop because each studnet can have multiple rows
				while (subQuery.next()) {
					subjects << subQuery.value(0).toString();
				}
			}

			//update the UI now
			QString vakkenStr = subjects.join(", ");
			if (vakkenStr.isEmpty()) vakkenStr = "Geen vakken gevonden.";

			ui.lblStatus->setText("Welkom " + RealName + "!\nIngeschreven voor: " + vakkenStr);
		}
		else if (role == "Leerkracht") {
			QSqlQuery subQuery;
			subQuery.prepare("SELECT SubjectName FROM subjects WHERE TeacherEmail = :email");
			subQuery.bindValue(":email", user);

			QStringList teaching;
			if (subQuery.exec()) {
				while (subQuery.next()) {
					teaching << subQuery.value(0).toString();
				}
			}

			QString vakkenStr = teaching.join(", ");
			if (vakkenStr.isEmpty()) vakkenStr = "Geen vakken gevonden.";

			ui.lblStatus->setText("Welkom " + RealName + "!\nU geeft les in: " + vakkenStr);
		}

		ui.stackedWidget->setCurrentIndex(1);
	}
	else {
		QMessageBox::warning(this, "Fout", "Dikke L");
	}
}