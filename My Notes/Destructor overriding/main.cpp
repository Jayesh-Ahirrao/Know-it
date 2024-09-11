#include <iostream>
using namespace std;

/**
 * all destructors called as it is made virtual
 * the calling sequence from derived to base
 */
class Base
{
    int *bptr;

public:
    Base()
    {
        cout << "Constructor Base called" << endl;
        bptr = new int;
    }
    virtual ~Base()
    {
        cout << "Destructor Base called" << endl;
        delete bptr;
    }
};

class Derived : public Base
{
    int *dptr;

public:
    Derived()
    {
        cout << "Constructor Derived called" << endl;
        dptr = new int;
    }
    ~Derived()
    {
        cout << "Destructor Derived called" << endl;
        delete dptr;
    }
};

int main()
{
    Base *a = new Derived();
    delete a;
}

/*
causing memory leak for pointer dptr as its constructor is not called
class Base
{
    int *bptr;

public:
    Base()
    {
        cout << "Constructor Base called" << endl;
        bptr = new int;
    }
    ~Base()
    {
        cout << "Destructor Base called" << endl;
        delete bptr;
    }
};

class Derived : public Base
{
    int *dptr;

public:
    Derived()
    {
        cout << "Constructor Derived called" << endl;
        dptr = new int;
    }
    ~Derived()
    {
        cout << "Destructor Derived called" << endl;
        delete dptr;
    }
};

int main()
{
    Base *a = new Derived();
    delete a;
}

 */