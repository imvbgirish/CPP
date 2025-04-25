#include "item.h"

void item::getdata(int a, float b){      //we can do it as inline also
    number = a;
    cost = b;
    read();
}
