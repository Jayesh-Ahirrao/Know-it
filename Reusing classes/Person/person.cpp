#include "person.h"
#include <iostream>
#include <string.h>
using namespace std;

// default constructor for date is called automatically;

Person::Person() : dob()
{
    // as memory is already allocated
    strcpy(this->name, "person");
}
Person::Person(const char *name, int d, int m, int y) : dob(d, m, y)
{
    strcpy(this->name, name);
}
Person::Person(const char *name, Date &dobObj) : dob(dobObj)
{
    strcpy(this->name, name);
}

void Person::display()
{
    cout << endl
         //  << "\t" << "Name: " << this->name << endl << "\t" << "Date: " << dob.display() << endl;
         // as the return type of dob.display() is void it is giving error
         << "Name: " << this->name;
    dob.display();

    cout << endl;
}
