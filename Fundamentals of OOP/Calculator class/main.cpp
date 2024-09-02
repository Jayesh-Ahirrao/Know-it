#include "calculator.h"
#include <iostream>
using namespace std;

int main()
{
    Calculator calc;

    calc.accept_values();
    calc.display_values();

    cout << endl
         << "Result of addition:\t" << calc.addition();
    cout << endl
         << "Result of substraciton:\t" << calc.substraciton();
    cout << endl
         << "Result of multiplication:\t" << calc.multiplication();
    cout << endl
         << "Result of division:\t" << calc.division();
}