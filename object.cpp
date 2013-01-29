#include <iostream>
#include <cstring>

#include "object.h"

Object::Object()
{
    std::cout << this << std::endl;
}

Object::~Object()
{

}

static int find_string(const char * str, const char * substr)
{
    if (strlen(str) < strlen(substr))
        return -1;
    int idx = 0;
    int len = strlen(substr);
    bool start = true;
    const char * pos = str;
    while (*pos) {
        if (start && !strncmp(pos, substr, len) && pos[len]=='\0')
            return idx;
        start = false;
        if (*pos == '\0') {
            idx++;
            start = true;
        }
        pos++;
    }
    return -1;
}
void Object::my_connect(Object* sender, const char* sig, Object* receiver, const char* slt)
{
    std::cout << sender->meta.signal_names << " : " << sig << std::endl;
    std::cout << sender->meta.slot_names << " : " << slt <<  std::endl;

    int sig_idx = find_string(sender->meta.signal_names, sig);
    int slt_idx = find_string(receiver->meta.slot_names, slt);
    if (sig_idx == -1 || slt_idx == -1) {
        std::cerr << "signal or slot not found!" << std::endl;
    } else {
        Connection c = {receiver, slt_idx};
        sender->connections.insert(std::pair<int, Connection>(sig_idx, c));
    }
}
void Object::slot1()
{
    std::cout << "SLOT: Hello Qt world!" << " : " << this << std::endl;
}
void MetaObject::active(Object* sender, int idx)
{
    ConnectionMapIt it;
    std::pair<ConnectionMapIt, ConnectionMapIt> ret;
    ret = sender->connections.equal_range(idx);
    for (it=ret.first; it!=ret.second; ++it) {
        Connection c = (*it).second;
        c.receiver->metacall(c.method);
    }
}
void Object::testSignal()
{
    std::cout << "SIGNAL emited" << " : " << this << std::endl;
    my_emit signal1();
}
