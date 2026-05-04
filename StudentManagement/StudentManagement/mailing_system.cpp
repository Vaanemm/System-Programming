#include "student_management.h"
#include "database.h"

void StudentManagement::SendNewMail() {
	QString qstring_receiver = ui.MailTo->text();
	QString qstring_subject = ui.MailSubject->text();
	//the method toPlainText is used because text() does not exist for QTextEdit objects
	//they also support html and multi line markdown / layout.
	QString qstring_body = ui.MailBody->toPlainText();

	std::string receiver = qstring_receiver.toStdString();
	std::string subject = qstring_subject.toStdString();
	std::string body = qstring_body.toStdString();
	std::string sender = m_logged_in->GetEmail();


	Mail mail(sender, receiver, subject, body);
	Database::SendEmail(mail);
}