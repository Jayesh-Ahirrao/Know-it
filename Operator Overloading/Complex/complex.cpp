#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex() : real(1), img(1) {};

Complex::Complex(int real, int img) : real(real), img(img) {};

void Complex::display()
{
    if (img < 0)
    {
        cout << endl
             << real << img << "i";
    }
    else
    {
        cout << endl
             << real << "+" << img << "i";
    }
}
void Complex::accept()
{
    cout << endl
         << "Enter The real and imaginary number in space separated form:\n"
         << endl;
    cin >> this->real >> this->img;
}

Complex Complex::operator+(Complex &obj)
{
    Complex temp;
    temp.real = this->real + obj.real;
    temp.img = this->img + obj.img;

    return temp;
}

Complex Complex::operator-(Complex &obj)
{
    Complex temp;
    temp.real = this->real - obj.real;
    temp.img = this->img - obj.img;

    return temp;
}

Complex Complex::operator*(Complex &obj)
{
    Complex temp;

    temp.real = this->real * obj.real;
    temp.img = this->img * obj.img;
    return temp;
}

// int a is just given for distinguish it from pre-increment no specific reason, just acts as place holder
Complex Complex::operator++(int a)
{
    // acts as increment operator
    Complex temp;
    temp.real = this->real++;
    temp.img = this->img++;

    return temp;
}
Complex Complex::operator++()
{
    Complex temp;
    temp.real = ++this->real;
    temp.img = ++this->img;

    return temp;
}

Complex operator+(int num, const Complex &obj)
{
    return Complex(obj.real + num, obj.img);
}