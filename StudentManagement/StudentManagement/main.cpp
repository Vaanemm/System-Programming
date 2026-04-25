#include "StudentManagement.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include <QDebug>
#include "User.h"



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StudentManagement w;
	w.show();
	std::cout << "Hello World" << std::endl;
	qDebug() << "Hello World";

	User u("test@example.com", "secret");

	return a.exec();

}
