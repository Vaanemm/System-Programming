#include <iostream>
#include "subjects.h"

class Assignment {
public:
	Assignment(std::string _name, Subject* _subject);

	std::string GetName() const;
	std::string GetSubject() const;
	std::string ToString() const;


private:
	std::string m_name;
	Subject* m_subject;
};