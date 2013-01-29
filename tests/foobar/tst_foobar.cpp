#include "QtFoobar/qfoobar.h"

#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	QFoobar f;
	f.show();
	f.sayHi();

	return a.exec();
}
