
#include <iostream>
class Assignment;

class Submission {
public:
	Submission(Assignment* _assignment);

	std::string GetAssignment() const;
	std::string GetContent() const;
	std::string ToString() const;


private:
	Assignment* m_assignment;
	std::string m_content;
	int m_grade;
};