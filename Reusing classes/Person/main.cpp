#include "person.h"
#include "date.h"

int main()
{
    Person p1;
    Person p2("Jayesh", 29, 10, 1999);

    // using date
    Date dob(15, 9, 2001);
    Person p3("Rohit", dob);

    p1.display();
    p2.display();
    p3.display();
}