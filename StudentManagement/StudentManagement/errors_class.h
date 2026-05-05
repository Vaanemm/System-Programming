#pragma once
#include <QMessageBox>

enum class Errors {
	no_error,
	login_failed,
	invalid_input,
	database_not_open
};

class ErrorHandler {
public:
	static void DisplayMessage(Errors error);
};