#include "swap.cpp"

#include <iostream>
using namespace std;

int main()
{
    {
        int i1 = 10, i2 = 20;

        cout << endl
             << "Before Swapping:\t" << i1 << " " << i2;
        Swap::swap(i1, i2);

        cout << endl
             << "Before Swapping:\t" << i1 << " " << i2;
    }

    {
        char i1 = 'A', i2 = 'a';

        cout << endl
             << "Before Swapping:\t" << i1 << " " << i2;
        Swap::swap(i1, i2);

        cout << endl
             << "Before Swapping:\t" << i1 << " " << i2;
    }
}