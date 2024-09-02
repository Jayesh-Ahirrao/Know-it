#include "complex.h"
#include <iostream>
using namespace std;

Complex::Complex()
{
    this->imaginary = 0;
    this->real = 0;
}

Complex::Complex(const int real, const int imaginary)
{
    this->imaginary = imaginary;
    this->real = real;
}

// getters
int Complex::getImaginary()
{
    return this->imaginary;
}
int Complex::getReal()
{
    return this->real;
}

// setters
void Complex::setImaginary(const int imaginary)
{
    this->imaginary = imaginary;
}
void Complex::setReal(const int real)
{
    this->real = real;
}

void Complex::display()
{
    if (imaginary < 0)
    {
        cout << endl
             << real << imaginary << 'i';
    }
    else
    {
        cout << endl
             << real << '+' << imaginary << 'i';
    }
}