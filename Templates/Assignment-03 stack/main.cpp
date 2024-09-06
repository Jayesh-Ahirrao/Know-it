#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << endl
         << "Enter the size of the stack";
    cin >> size;

    Stack st(size);

    int choice, element;

    do
    {
        cout << endl
             << "\tEnter the number for following choices: ";
        cout << endl
             << "\t\t 1. Push in the stack\
                           \t\t .2 Pop from the stack\
                           \t\t .3 Peek into the stack\
                           \t\t .4 Display the stack\
                           \t\t 5. exit the program\
                           \tEnter your choice here: ";
        cin >> choice;

        switch (choice)
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
    } while (choice != 0);
}