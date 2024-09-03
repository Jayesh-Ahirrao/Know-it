#include "date.h"
#include <iostream>
#include <string>
using namespace std;

Date::Date()
{
    this->day = this->month = 1;
    this->year = 2014;
}

Date::Date(const int day, const int month, const int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(const int dateAndMonth)
{
    this->day = this->month = dateAndMonth;
    this->year = 2014;
}

void Date::display(const char *format = "Date: ")
{
    cout << endl
         << format << this->day << "/" << this->month << "/" << this->year;
}

void Date::aceept(const char *format = "Enter the date")
{
    cout << endl
         << format << " in space separated format: ";

    cin >> this->day >> this->month >> this->year;
}