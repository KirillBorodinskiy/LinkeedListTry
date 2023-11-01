#include <iostream>
#include "list.h"

using namespace std;

int main() {
    List list;
    for (int i = 0; i < 10; i++)
        if (i % 2)
            list.pushFront(i);
        else {
            list.pushBack(i);
        }
    list.print();
//    list.popBack();
//    list.popFront();
//    list.print();
    List list2;
    list2.copyDataFrom(list);
    list2.print();
//    list.clear();
//    list.pushBack(1);
//    list.print();
//    list.destroy();
//    list.pushBack(2);
//    list.print();

    return 0;
}
