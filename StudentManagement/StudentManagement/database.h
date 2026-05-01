
#include <string>
#include <vector>
#include "student.h"
#include "mail.h"

std::string read();
void write(const std::string& content);
void write2(const std::vector<std::shared_ptr<Student>>& stud_list);
void send_email(const Mail& mail);
