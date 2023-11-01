#include "list.h"

List::List()
    : front(new Item()),
    back(new Item()),
    counter(0)
{
    initList();
}

void List::initList(){
    front->next = back;
    back->prev = front;
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
    newItem->prev = front;
    newItem->next = front->next;
    front->next->prev = newItem;
    front->next = newItem;
    counter++;

}

void List::print() const {
    Item *temp = front->next;
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
    Item *temp = front->next;
    front->next = temp->next;
    temp->next->prev = front;
    delete temp;
    counter--;

}

