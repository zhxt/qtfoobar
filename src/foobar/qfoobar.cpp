#include "qfoobar.h"

QFoobar::QFoobar(QWidget *parent)
	:QWidget(parent),
	id(0)
{
	
}

QFoobar::~QFoobar()
{

}

void QFoobar::sayHi()
{
	fprintf(stderr, "Hi, QtFoobar\n");
}
