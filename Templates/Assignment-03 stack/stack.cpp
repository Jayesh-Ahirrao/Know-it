#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack()
{
    this->size = 5;
    this->top = -1;
    // dynamically allocate memory
    this->arr = new int[size];
}
Stack::Stack(int size)
{
    this->size = size;
    this->top = -1;
    this->arr = new int[size];
}
Stack::Stack(Stack &obj)
{
    this->size = obj.size;
    this->top = obj.top;
    // copy the elements on new memory
    arr = new int[obj.size];

    for (int i = 0; i < obj.top; i++)
    {
        this->arr[i] = obj.arr[i];
    }
}
Stack::~Stack()
{
    delete[] this->arr;
}

bool Stack::push(int data)
{
    if (this->isFull())
    {
        cout << endl
             << "Stack is Full";
        return false;
    }
    else
    {
        arr[++top] = data;
    }

    return true;
}

int Stack::pop()
{
    int data = 0;
    if (this->top == -1)
    {
        cout << "stack is already empty";
        return data;
    }
    int data = arr[this->top];
    top--;
    return data;
}

int Stack::peek()
{
    if (!isEmpty())
    {
        return arr[this->top];
    }
    cout << "stack is empty";
    return 0;
}
bool Stack::isEmpty()
{
    if (this->isEmpty())
    {
        return true;
    }

    return false;
}
bool Stack::isFull()
{
    if (this->top == this->size - 1)
    {
        return true;
    }
    return false;
}

void Stack::display()
{
    cout << endl
         << "**************STACK******************";

    for (int i = top; i >= 0; i--)
    {
        cout << endl
             << "\t\t" << arr[i];
    }

    cout << endl
         << "**************STACK******************";
}