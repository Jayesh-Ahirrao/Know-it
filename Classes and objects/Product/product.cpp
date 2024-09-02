#include "product.h"
#include <iostream>
#include <string.h>
using namespace std;

Product::Product()
{
    this->code = 0;
    this->unitPrice = 0;
    this->name = new char[3]; // 2 for NA and one for '\0';
    strcpy(this->name, "NA");
}

Product::Product(char *str, int code, float unitPrice)
{
    this->name = new char[strlen(str) + 1];
    strcpy(this->name, str);
    this->code = code;
    this->unitPrice = unitPrice;
}

Product::Product(Product &productObj)
{
    this->code = productObj.code;
    this->unitPrice = productObj.unitPrice;

    // allocate memory for name
    this->name = new char[strlen(productObj.name) + 1];
    // copy string
    strcpy(this->name, productObj.name);
}

Product::~Product()
{
    // this will delete entire array
    // if you dont pass the [] then it will delete first index
    // delete will alway delete this ref the pointer is pointing to
    // it wont touch stack, it will only delete in heap
    delete[] this->name;
    cout << "Cleared the memeory for name ";
}

void Product::display()
{
    cout << endl
         << "Name:\t" << this->name << endl
         << "Code:\t" << this->code << endl
         << "unitPrice:\t" << this->unitPrice;
}