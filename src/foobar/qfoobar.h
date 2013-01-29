#ifndef QFOOBAR_H 
#define QFOOBAR_H 

#include <QWidget>

class Q_DECL_EXPORT QFoobar: public QWidget
{
	Q_OBJECT
public:
	QFoobar(QWidget *parent = 0);
	~QFoobar();

	void sayHi();
private:
	int id;	
};

#endif
