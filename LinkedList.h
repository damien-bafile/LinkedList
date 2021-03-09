#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
#include "Student.h"

class LinkedList
{
public:
    LinkedList(int id, std::string name);
    LinkedList(Student s);
    int getStudentID() const;
    std::string getStudentName() const;
    void addNode(int id, std::string name);
    void addNode(Student s);
    LinkedList *getNextStudent();
    LinkedList *getPrevStudent();

    LinkedList *operator++(int);
    LinkedList *operator--(int);

    ~LinkedList();

private:
    Student s;
    LinkedList *nextNode;
    LinkedList *prevNode;
    void init();
};
#endif