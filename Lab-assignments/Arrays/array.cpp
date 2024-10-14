#include "array.h"

// Array::Array() : size(5)
// {
//     arr = new int[5];
// }

// Array::Array(int size) : size(size)
// {
//     arr = new int[size];
// }

// // copy constructor
// Array::Array(const Array &obj) : size(obj.size)
// {
//     arr = new int[size];
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = obj.arr[i];
//     }
// }

// Array::~Array()
// {
//     delete[] arr;
// }

Array::Array() : size(5), arr(nullptr)
{
    this->arr = new int[5];
}

Array::Array(int size) : size(size), arr(nullptr)
{
    this->arr = new int[size];
}

Array::Array(const Array &obj)
{
    if (this != &obj)
    {
        delete[] arr;
        this->size = obj.size;
        this->arr = new int[size];

        for(int i = 0; i < size; i++){
            arr[i] = obj.arr[i];
        }
    }

}

Array::~Array()
{
    delete[] arr;
}