#include <iostream>
using namespace std;

namespace Swap
{
    template <class T>
    void swap(T &element01, T &element02)
    {
        // cout << endl
        //      << "Before Swapping:\t" << element01 << " " << element02;

        T temp = element01;
        element01 = element02;
        element02 = temp;

        // cout << endl
        //      << "Before Swapping:\t" << element01 << " " << element02;
    }
}