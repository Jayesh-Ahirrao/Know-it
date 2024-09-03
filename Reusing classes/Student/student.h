#include "date.h"

class Student
{
    int rollNum;
    char name[20];
    Date dateOfBirth;
    Date dateOfAdmission;

public:
    Student();
    Student(int, const char *, Date &, Date &);
    void display();
    void accept();
};