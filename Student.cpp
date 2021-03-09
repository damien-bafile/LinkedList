#include "Student.h"

Student::Student()
{
    studentID = 0;
    studentName = "";
}

Student::Student(int id, std::string name)
{
    studentID = id;
    studentName = name;
}

unsigned Student::getStudentID() const
{
    return studentID;
}

void Student::setStudentID(unsigned id)
{
    studentID = id;
}

std::string Student::getName() const
{
    return studentName;
}

void Student::setName(std::string name)
{
    studentName = name;
}