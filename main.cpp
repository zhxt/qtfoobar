#include "object.h"

int main()
{
    Object obj1, obj2;
    Object::my_connect(&obj1, "signal1", &obj2, "slot1");
    obj1.testSignal();
    return 0;
}
