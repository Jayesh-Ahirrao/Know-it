#include "search.cpp"
#include <iostream>
using namespace std;

int main()
{
    {
        int arr[5] = {1, 2, 3, 4, 5};
        int target01 = 0;
        int target02 = 5;

        cout << endl
             << "Element " << target01 << "?: \t" << Search::search(arr, 5, target01);
        cout << endl
             << "Element " << target02 << "?: \t" << Search::search(arr, 5, target02);
    }
    {
        char arr[5] = {'a', 'b', 'c', 'd', 'e'};
        char target01 = 'a';
        char target02 = 'A';

        cout << endl
             << "Element " << target01 << "?: \t" << Search::search(arr, 5, target01);
        cout << endl
             << "Element " << target02 << "?: \t" << Search::search(arr, 5, target02);
    }
}