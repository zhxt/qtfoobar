#include <QtGui/QApplication>
#include <QtFoobar/QtFoobar>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
	QFoobar f;
	f.show();
	f.sayHi();

	return a.exec();
}
