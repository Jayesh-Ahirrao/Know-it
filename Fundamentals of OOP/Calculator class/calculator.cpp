#include "calculator.h"
#include <iostream>
using namespace std;

void Calculator::accept_values()
{
    cout << endl
         << "Enter the first value \t";
    cin >> no1;

    cout << endl
         << "Enter the second value\t";
    cin >> no2;
}

void Calculator::display_values()
{
    cout << endl
         << "First value:\t" << no1;
    cout << endl
         << "Second value:\t" << no2;
}

int Calculator::addition()
{
    return no1 + no2;
}

int Calculator::substraciton()
{
    return no1 - no2;
}

int Calculator::multiplication()
{
    return no1 * no2;
}

int Calculator::division()
{
    if (no2 == 0)
    {
        // cerr << endl << "Operation is invalid as we are tryig to divide by zero";
        throw runtime_error("Operation is invalid as we are trying to divide by");
        return -1;
    }

    return no1 / no2;
}