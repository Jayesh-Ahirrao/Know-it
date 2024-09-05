#include "complex.h"

int main()
{
    Complex c1(1, 25);
    Complex c2(10, 2);

    Complex c3;
    Complex c4;
    Complex c5;
    Complex c6;
    Complex c7;

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;

    // c3.display();
    // c4.display();
    // c5.display();

    c6 = c1++;
    c7 = ++c2;

    c6.display();
    c1.display();

    c7.display();
    c2.display();
}