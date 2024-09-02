#include "Box.h"
#include <iostream>
using namespace std;

void Box::setHeight(int h)
{
    height = h;
}

void Box::setLength(int l)
{
    length = l;
}

void Box::setWidth(int w)
{
    width = w;
}

void Box::showBoxDiamensions()
{
    cout << endl
         << "Box dimensions are: " << height << " " << width << " " << length;
}