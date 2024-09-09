#include <iostream>
using namespace std;

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

    cout << "\n\t\t " << objD.a; // Error:  "D::a" is ambiguous

    return 0;
}