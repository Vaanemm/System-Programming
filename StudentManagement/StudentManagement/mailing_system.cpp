#include "student_management.h"
#include "database.h"
#include "mail.h"

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

	if (receiver.empty()) {
		QMessageBox::warning(this, "Warning", "Please specify a receiver");
		return;
	}
	else if (subject.empty()) {
		QMessageBox MsgBox;
		MsgBox.setWindowTitle("Warning");
		MsgBox.setText("You forgot to specify a subject");

		//We have to add a role. reject role lets us also trigger it by ESC
		MsgBox.addButton("Return", QMessageBox::RejectRole);
		QPushButton* SendButton = MsgBox.addButton("Send anyway", QMessageBox::AcceptRole);

		// this line of code blocks the program, and wait for a click
		MsgBox.exec();
		if (MsgBox.clickedButton() != SendButton) {
			return;
		}
	}

	// Clear the fields
	ui.MailTo->clear();
	ui.MailSubject->clear();
	ui.MailBody->clear();

	Mail mail(sender, receiver, subject, body);
	Database::SendEmail(mail);

	QMessageBox::information(this, "Info", "Mail succesfuly sent!");
}

void StudentManagement::RefreshInbox() {
	//empty the list before filling it again
	ui.MailInbox->clear();
	std::vector<std::unique_ptr<Mail>> mails = Database::GetMailsForReceiver(m_logged_in->GetEmail());

	for (const auto& mail : mails) {
		std::string Headline;
		Headline = mail->GetSender() +"  -  " + mail->GetSubject();
		QString item = QString::fromStdString(Headline);
		ui.MailInbox->addItem(item);

	}
	return;
}