#include <errors_class.h>



void ErrorHandler::DisplayMessage(Errors _error) {
	switch (_error) {
	case Errors::login_failed:
		QMessageBox::critical(nullptr, "Error, could not log in", "The e-mail or password is incorrect, please try again."); break;
	case Errors::invalid_input:
		QMessageBox::critical(nullptr, "Error", "The input is not valid.\nMake sure to fill in every box."); break;
	case Errors::no_child_found:
		QMessageBox::critical(nullptr, "Error", "This child's e-mail was not found."); break;
	case Errors::file_path_empty:
		QMessageBox::critical(nullptr, "Error", "TThe given file path is empty."); break;
	case Errors::email_taken:
		QMessageBox::critical(nullptr, "Error", "This e-mail is already taken."); break;
	case Errors::database_not_open:
		QMessageBox::critical(nullptr, "Error", "Could not open database.csv"); break;
	case Errors::enrollment_not_open:
		QMessageBox::critical(nullptr, "Error", "Could not open enrollments.csv"); break;
	case Errors::assignments_not_open:
		QMessageBox::critical(nullptr, "Error", "Could not open assignnments.csv"); break;
	case Errors::receiver_empty:
		QMessageBox::critical(nullptr, "Error", "Please fill in a receiver."); break;
	case Errors::upload_failed:
		QMessageBox::critical(nullptr, "Error", "Failed to upload file."); break;
	default: QMessageBox::critical(nullptr, "Error", "An unknown error occurred");
	}
}