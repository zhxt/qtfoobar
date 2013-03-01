//! [0]
//! [1]
#include <QtFoobar/QtFoobar>
//! [1]
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	
//! [2]
	QFoobar f;
//! [2]
	f.show();
//! [3]
	f.sayHi();
//! [3]

	return a.exec();
}
//! [0]
