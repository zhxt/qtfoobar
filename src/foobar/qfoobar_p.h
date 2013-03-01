#ifndef QFOOBAR_P_H
#define QFOOBAR_P_H

#include <stdio.h>

class QFoobarPrivate
{
public:
	enum {mask = 0};
	QFoobarPrivate()
	{
	}

	inline void sayHi()
	{
		fprintf(stderr, "hi, there\n");
	}
	int foo;
	int bar;
};

#endif
