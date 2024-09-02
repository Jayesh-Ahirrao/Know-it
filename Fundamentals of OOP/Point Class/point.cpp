#include <iostream>
using namespace std;
#include "Point.h"

void Point::setPoint(int first, int second){
    x = first;
    y = second;
}

void Point::showPoint(){
    cout << endl << "[" << x << "," << y << "]" ;
}