#ifndef LIST_H
#define LIST_H

#include "item.h"

class List{
    Item *front;
    Item *back;
    unsigned int counter;
    void initList();
public:
    List();
    void pushBack(Data d);
    void pushFront(Data d);
    void print() const;
    unsigned int size() const{
        return counter;
    }
    bool isEmpty() const{
        return !size();
    }
    void popBack();
    void popFront();
};

#endif // LIST_H
