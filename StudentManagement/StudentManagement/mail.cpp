#include "mail.h"

Mail::Mail(const std::string& _sender, const std::string& _receiver, const std::string& _subject, const std::string& _text)
	:m_sender(_sender), m_receiver(_receiver), m_subject(_subject), m_text(_text) {}


std::string Mail::GetSender() const {
	return m_sender;
}
std::string Mail::GetReceiver() const {
	return m_receiver;
}
std::string Mail::GetSubject() const {
	return m_subject;
}
std::string Mail::GetText() const {
	return m_text;
}

std::string Mail::ToString() const {
	std::string output;
	output = "Sender: " + GetSender();
	output += "Receiver: " + GetReceiver();
	output += "Subject: " + GetSubject();
	output += "Text: " + GetText();
	return output;
}