#include "LinkedList.h"

LinkedList::LinkedList(int id, std::string name)
{
    s.setStudentID(id);
    s.setName(name);
}
LinkedList::LinkedList(Student student)
{
    s.setStudentID(student.getStudentID());
    s.setName(student.getName());
}

std::string LinkedList::getStudentName() const
{
    return s.getName();
}

int LinkedList::getStudentID() const
{
    return s.getStudentID();
}

void LinkedList::addNode(int id, std::string name)
{
    nextNode = new LinkedList(id, name);
    nextNode->prevNode = this;
}

void LinkedList::addNode(Student s)
{
    nextNode = new LinkedList(s.getStudentID(), s.getName());
    nextNode->prevNode = this;
}

LinkedList *LinkedList::getNextStudent()
{
    if (nextNode == nullptr)
        return nullptr;
    else
        return nextNode;
}

LinkedList *LinkedList::getPrevStudent()
{
    if (prevNode == nullptr)
        return nullptr;
    else
        return prevNode;
}

LinkedList::~LinkedList()
{
    delete nextNode;
    delete prevNode;
}

LinkedList *LinkedList::operator++(int)
{
    return getNextStudent();
}

LinkedList *LinkedList::operator--(int)
{
    return getPrevStudent();
}
void LinkedList::init()
{
    nextNode = prevNode = nullptr;
}