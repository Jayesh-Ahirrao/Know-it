#include <iostream>
#include "date.h"
using namespace std;

void Date::setDate(int d, int m, int y){
    day = d;
    month = m;
    year = y;
}

void Date::showDate(){
    cout << endl << day << "/" << month << "/" << year;
}

// getters
int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}


// setters
void Date::setDay(int d){
    day = d;
}

void Date::setMonth(int m){
    month = m;
}

void Date::setYear(int y){
    year = y;
}

