#ifndef MY_OBJECT_H
#define MY_OBJECT_H

#include <iostream>
#include <map>

#define my_slots
#define my_signals protected
#define my_emit
#define MY_OBJECT static MetaObject meta; void metacall(int idx);

#define SLOT(a)     "1"#a
#define SIGNAL(a)   "2"#a

class Object;

struct MetaObject
{
    const char * signal_names;
    const char * slot_names;
    static void active(Object *sender, int index);
};

struct Connection
{
    Object * receiver;
    int method;
};

typedef std::multimap<int, Connection> ConnectionMap;
typedef std::multimap<int, Connection>::iterator ConnectionMapIt;


class Object
{
//	MY_OBJECT
    static MetaObject meta;
    void metacall(int index);

public:
    Object();
    virtual ~Object();
    static void my_connect(Object *, const char *, Object *, const char *);

    void testSignal();

my_signals:
    void signal1();

public my_slots:
    void slot1();

    friend class MetaObject;

private:
    ConnectionMap connections;
};

#endif //MY_OBJECT
