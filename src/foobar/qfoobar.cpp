#include "qfoobar_p.h"
#include "qfoobar.h"

/*!
	\class QFoobar
	\brief QFoobar class is a demo class.
	
	\inmodule QtFoobar
	\since 1.0

	QFoobar class is a simple class.
*/

/*!
	Constructs a Foobar class.
*/
QFoobar::QFoobar(QWidget *parent)
	:QWidget(parent),
	id(0),
	d_ptr(new QFoobarPrivate)
{

}

/*!
	Destroys Foobar.
*/

QFoobar::~QFoobar()
{

}

/*! 
	\fn void QFoobar::sayHi()
	
	Print a hello message.

	Example:
	\snippet doc_src_foobar.cpp 2
	\snippet doc_src_foobar.cpp 3
*/

void QFoobar::sayHi()
{
	d_ptr->sayHi();
}
