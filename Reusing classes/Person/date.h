#pragma once
class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int, int, int);
    Date(int);
    void display();
};