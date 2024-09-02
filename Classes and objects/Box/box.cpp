#include "box.h"
#include <iostream>
using namespace std;

Box::Box()
{
    this->height = 1;
    this->width = 1;
    this->length = 1;
}

Box::Box(const int height, const int length, const int width)
{
    this->height = height;
    this->length = length;
    this->width = width;
}

void Box::display()
{
    cout << endl
         << "Height:\t " << height << endl
         << "Width:\t " << width << endl
         << "Length:\t " << length << endl;
}