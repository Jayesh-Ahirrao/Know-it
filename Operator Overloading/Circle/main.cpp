#include "circle.h"
#include <iostream>
using namespace std;

int main()
{
    Circle c1;
    Circle c2(25);

    c1.display();
    c2.display();

    Circle c3;

    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();

    c3 = c2++;
    c3.display();
    c3 = ++c1;
    c3.display();

    c3 = c1--;
    c3.display();
    c3 = --c2;
    c3.display();

    cout << endl
         << (c2 > c1);
    cout << endl
         << (c2 < c1);
    cout << endl
         << (c2 == c1);
}