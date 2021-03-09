#include <iostream>
#include <string>
#include "LinkedList.h"

int main()
{
    LinkedList *ll = new LinkedList(123, "Damien");
    std::cout << ll->getStudentName() << " "
              << ll->getStudentID() << " "
              << "\n";

    ll->addNode(234, "Jane");

    if (ll->getNextStudent() != nullptr)
    {
        ll = ll->getNextStudent();
        std::cout << ll->getStudentName() << " "
                  << ll->getStudentID() << " "
                  << "\n";
    }

    if (ll->getPrevStudent() != nullptr)
    {
        ll = ll->getPrevStudent();
        std::cout << ll->getStudentName() << " "
                  << ll->getStudentID() << " "
                  << "\n";
    }
    if (ll->getPrevStudent() != nullptr)
    {
        ll = ll->getPrevStudent();
        std::cout << ll->getStudentName() << " "
                  << ll->getStudentID() << " "
                  << "\n";
    }
    return EXIT_SUCCESS;
}
