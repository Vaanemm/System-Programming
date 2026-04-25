#include "StudentManagement.h"
#include <iostream>
#include <QDebug>

StudentManagement::StudentManagement(QWidget *parent)
	: QMainWindow(parent)
{
	std::cout << "Hello World" << std::endl;
	qDebug() << "Hello World";


	ui.setupUi(this);
}
