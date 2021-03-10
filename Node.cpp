#include "Node.h"

template <class Type>
Node<Type>::Node()
{
    data = null;
    nextNode = nullptr;
    prevNode = nullptr;
}

template <class Type>
Node<Type>::Node(Type t)
{
    data = t;
    nextNode = nullptr;
    prevNode = nullptr;
}

template <class Type>
Type Node<Type>::getData() { return data; }

template <class Type>
Node<Type> *Node<Type>::getNext() { return getNext; }

template <class Type>
Node<Type> *Node<Type>::getPrev() { return getPrev; }

template <class Type>
Node<Type>::~Node<Type>()
{
    delete nextNext;
    delete prevNode;
}