#include "object.h"

static const char sig_names[] = "signal1\0";
static const char slts_names[] = "slot1\0";

MetaObject Object::meta = {sig_names, slts_names};

void Object::signal1()
{
    std::cout << "OBJECT : " << this << std::endl;
    MetaObject::active(this, 0);
}
void Object::metacall(int idx)
{
    switch (idx) {
        case 0:
            slot1();
            break;
        default:
            break;
    };
}
