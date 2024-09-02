#include "date.h"
#include <iostream>
using namespace std;

int main()
{
    Date d;

    d.setDate(30, 8, 2024);

    d.showDate();

    d.setDay(1);
    d.setMonth(9);
    d.setYear(2024);
    cout << endl
         << "after updating date";
    d.showDate();

    cout << endl
         << "using getters";

    cout << endl
         << d.getDay();
    cout << endl
         << d.getMonth();
    cout << endl
         << d.getYear();
}