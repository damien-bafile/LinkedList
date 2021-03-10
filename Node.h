#ifndef Node_h
#define Node_h
#include <iostream>

template <class Type>
class Node
{
public:
    Node();
    Node(Type t);
    Type getData();
    Node<Type> *getNext();
    Node<Type> *getPrev();
    ~Node();

private:
    Type data;
    Node<Type> *nextNode;
    Node<Type> *prevNode;
};
#endif