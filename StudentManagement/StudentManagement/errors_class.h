#pragma once
#include <QMessageBox>

enum class Errors {
	login_failed,
	invalid_input,
	database_not_open,
	no_child_found,
	file_path_empty,
	enrollment_not_open,
	assignments_not_open,
	email_taken,
	receiver_empty
};

class ErrorHandler {
public:
	static void DisplayMessage(Errors error);
};