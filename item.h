#ifndef ITEM_H
#define ITEM_H

typedef int Data;

#include <iostream>

class Item {
    Item *prev;
    Item *next;
    Data data;
public:
    Item(Data d)
            : prev(nullptr), next(nullptr),
              data(d) {}

    Item()
            : prev(nullptr), next(nullptr) {}

    void setData(Data d) {
        data = d;
    }

    Data getData() const {
        return data;
    }

    void print() const {
        std::cout << getData()<< " ";
    }

    void printLn() const {
        print();
        std::cout << std::endl;
    }

    friend class List;
};

#endif // ITEM_H
