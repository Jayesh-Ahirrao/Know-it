#include "circle.h"
#include <iostream>
using namespace std;

const float Circle::PI = 3.14f;

Circle::Circle() : radius(1) {}

Circle::Circle(int radius) : radius(radius) {}

void Circle::display()
{
    cout << endl
         << "The radius of the circle is: " << this->radius << endl;
}

float Circle::calculateArea()
{
    float area = radius * radius * PI;
    cout << endl
         << "Area of the circle is : " << area << endl;
    return area;
}

float Circle::calculateCircumference()
{
    float circumference = 2 * radius * PI;
    cout << endl
         << "Circumference of the circle is : " << circumference << endl;
    return circumference;
}

Circle Circle::operator+(Circle &obj)
{
    Circle temp;
    temp.radius = this->radius + obj.radius;
    return temp;
}
Circle Circle::operator-(Circle &obj)
{
    Circle temp;
    temp.radius = this->radius - obj.radius;
    return temp;
}

Circle Circle::operator++(int)
{
    Circle temp;
    temp.radius = this->radius++;
    return temp;
}
Circle Circle::operator++()
{
    Circle temp;
    temp.radius = ++this->radius;
    return temp;
}

Circle Circle::operator--(int)
{
    Circle temp;
    temp.radius = this->radius--;
    return temp;
}
Circle Circle::operator--()
{
    Circle temp;
    temp.radius = --this->radius;
    return temp;
}

bool Circle::operator>(Circle &obj)
{
    return this->radius > obj.radius;
}
bool Circle::operator<(Circle &obj)
{
    return this->radius < obj.radius;
}
bool Circle::operator==(Circle &obj)
{
    return this->radius == obj.radius;
}

istream &operator>>(istream &cinObj, Circle &circleObj)
{
    cinObj >> circleObj.radius;
}

ostream &operator<<(ostream &coutObj, Circle &circleObj)
{
    coutObj << circleObj.radius;
    return coutObj;
}