#pragma once

#include <string>

class Mail {
public:
	//timestamp must be added
	// fields could be const
	// could be a struct instead of a class because there wont be much logic in the class
	Mail(const std::string& _sender, const std::string& _receiver, const std::string& _subject, const std::string& _text);

	std::string GetSender() const;
	std::string GetReceiver() const;
	std::string GetSubject() const;
	std::string GetText() const;
	std::string ToString() const;

private:
	std::string m_sender;
	std::string m_receiver;
	std::string m_subject;
	std::string m_text;

};