#include "date.h"
#include <iostream>
using namespace std;

void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}

void Date::showDate()
{
    cout << endl
         << day << "/" << month << "/" << year;
}

void Date::setDay(int d)
{
    day = d;
}

void Date::setMonth(int m)
{
    month = m;
}

void Date::setYear(int y)
{
    year = y;
}
