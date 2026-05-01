#include "student_management.h"

void StudentManagement::handleLogout() {
	ui.stackedWidget->setCurrentWidget(ui.LoginPage);
}