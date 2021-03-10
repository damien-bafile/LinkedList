#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
#include "Node.h"

template <class Type>
class LinkedList
{
public:
    LinkedList();
    void addBeginning(Type node);
    void addEnd(Type node);
    void addAfter(Type pos, Type node);
    Type getData();
    int Size();

    ~LinkedList();

private:
    Node<Type> *head;
};
#endif