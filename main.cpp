#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Node.h"
#include "Student.h"

int main()
{
    Student s1 = Student(123, "Damien");
    auto head = new Node<Student>(s1);
    auto ll = new LinkedList<Student>();
    ll->addBeginning(head);
    std::cout << ll->getData().getName();

    // if (ll->getNextStudent() != nullptr)
    // {
    //     ll = ll->getNextStudent();
    //     std::cout << ll->getStudentName() << " "
    //               << ll->getStudentID() << " "
    //               << "\n";
    // }

    // if (ll->getPrevStudent() != nullptr)
    // {
    //     ll = ll->getPrevStudent();
    //     std::cout << ll->getStudentName() << " "
    //               << ll->getStudentID() << " "
    //               << "\n";
    // }
    // if (ll->getPrevStudent() != nullptr)
    // {
    //     ll = ll->getPrevStudent();
    //     std::cout << ll->getStudentName() << " "
    //               << ll->getStudentID() << " "
    //               << "\n";
    // }
    delete head;
    delete ll;
    return EXIT_SUCCESS;
}
