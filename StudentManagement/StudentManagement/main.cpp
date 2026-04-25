#include "StudentManagement.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StudentManagement w;
	w.show();
	return a.exec();
}
