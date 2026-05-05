#include <errors_class.h>



void ErrorHandler::DisplayMessage(Errors _error) {
	switch (_error) {
	case Errors::no_error:
		QMessageBox::critical(nullptr, "Success!", "Task done successfuly"); break;
	case Errors::login_failed:
		QMessageBox::critical(nullptr, "Error, could not log in", "The e-mail or password is incorrect, please try again."); break;
	case Errors::invalid_input:
		QMessageBox::critical(nullptr, "Error", "The input is not valid"); break;
	default: QMessageBox::critical(nullptr, "Error", "An unknown error occurred");
	}
}