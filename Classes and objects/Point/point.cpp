#include <iostream>
using namespace std;
#include "Point.h"

Point::Point(int first, int second){
    x = first;
    y = second;
}

Point::Point(){
    this->x = 0;
    this->y = 0;
}



void Point::display(){
    // as ogf now only print strin g= don
    cout << endl << "[" << x << "," << y << "]" ;
}