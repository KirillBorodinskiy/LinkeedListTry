#ifndef LIST_H
#define LIST_H

#include "item.h"

class List {
    Item *first;
    Item *back;
    unsigned int counter;

    void initList();

    void copyDataFrom(const List &other);
    Item* find(Data d);
public:
    List();

    List(const List &other);
    void append(List &other){
        this->copyDataFrom(other);
    }
    void pushBack(Data d);

    void pushFront(Data d);

    void print() const;

    unsigned int size() const {
        return counter;
    }

    bool isEmpty() const {
        return !size();
    }

    void popBack();

    void popFront();

    void clearOnlyData();

    void clear();

    void destroy();
};

#endif // LIST_H
