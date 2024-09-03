#include "student.h"

int main()
{
    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        students[i].accept();
    }

    for (int i = 0; i < 5; i++)
    {
        students[i].display();
    }
}