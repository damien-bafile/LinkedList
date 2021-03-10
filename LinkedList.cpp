#include "LinkedList.h"

template <class Type>
LinkedList<Type>::LinkedList()
{
    head = 0;
}

template <class Type>
void LinkedList<Type>::addBeginning(Type node)
{
    Type temp = head;
    head = node;
    head->nextNode = temp;
}

template <class Type>
Type LinkedList<Type>::getData() { return head; }

template <class Type>
LinkedList<Type>::~LinkedList()
{
    delete head;
}
