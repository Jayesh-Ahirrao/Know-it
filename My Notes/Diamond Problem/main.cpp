#include <iostream>
using namespace std;

class A
{
public:
    int value;
    A() : value(0) {}
    void display()
    {
        std::cout << "Class A value: " << value << std::endl;
    }
};

class B : virtual public A
{
}; // Virtual inheritance
class C : virtual public A
{
}; // Virtual inheritance

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.value = 10; // No ambiguity, only one instance of A
    obj.display();  // Output: Class A value: 10

    return 0;
}


/*
class A
{
public:
    int a = 1;
};

class B : public A
{
public:
    int b = 2;
};

class C : public A
{
public:
    int c = 3;
};

class D : public B, public C
{
public:
    int d = 4;
};

int main()
{

    D objD;

    cout << "\n\t\t " << objD.d; // print 4;

    cout << "\n\t\t " << objD.c; // print 3;

    cout << "\n\t\t " << objD.b; // print 3;

    // cout << "\n\t\t " << objD.a; // Error:  "D::a" is ambiguous

    cout << "\n\t\t " << objD.B::a; // print 1;
    objD.B::a = 100;

    cout << "\n\t\t " << objD.B::a; // print 100;
    cout << "\n\t\t " << objD.C::a; // print 1;

    return 0;
}
*/