#include "list.h"

List::List()
    : first(new Item()),
      back(new Item()),
      counter(0)
{
    initList();
}

void List::initList(){
    first->next = back;
    back->prev = first;
}

void List::pushBack(Data d) {
    Item *newItem = new Item(d);
    newItem->prev = back->prev;
    newItem->next = back;
    back->prev->next = newItem;
    back->prev = newItem;
    counter++;

}

void List::pushFront(Data d) {
    Item *newItem = new Item(d);
    newItem->prev = first;
    newItem->next = first->next;
    first->next->prev = newItem;
    first->next = newItem;
    counter++;

}

void List::print() const {
    Item *temp = first->next;
    while (temp != back) {
        temp->print();
        temp = temp->next;
    }
    std::cout << std::endl;

}

void List::popBack() {
    if (isEmpty()) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Item *temp = back->prev;
    back->prev = temp->prev;
    temp->prev->next = back;
    delete temp;
    counter--;

}

void List::popFront() {
    if (isEmpty()) {
        std::cout << "List is empty" << std::endl;
        return;
    }
    Item *temp = first->next;
    first->next = temp->next;
    temp->next->prev = first;
    delete temp;
    counter--;

}

