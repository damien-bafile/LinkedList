#ifndef student_h
#define student_h

#include <iostream>

class Student
{

public:
    Student();
    Student(int id, std::string name);
    unsigned getStudentID() const;
    void setStudentID(unsigned id);
    std::string getName() const;
    void setName(std::string name);

private:
    unsigned studentID;
    std::string studentName;
};

#endif
