#include <iostream>
#include "list.h"

using namespace std;

int main()
{
    List list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushFront(4);
    list.print();
    list.popBack();
    list.popFront();
    list.print();

    return 0;
}
