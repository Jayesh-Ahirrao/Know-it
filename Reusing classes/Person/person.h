
#include "date.h"
// from classes and object/Date

class Person
{
    // this is example of containment
    char name[20];
    Date dob;

public:
    Person();
    Person(const char *, int d, int m, int y);
    Person(const char *, Date &dobObj);

    void display();
};