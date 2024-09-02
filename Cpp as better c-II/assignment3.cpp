#include <iostream>
using namespace std;

int add(int, int);
float add(float, float);
float add(int, float);
float add(float, int);

int main()
{
    add(1, 1);
    add(10.1f, 10.1F);
    add(1, 10.1f);
    add(20.1f, 1);

    return 0;
}

int add(int a, int b)
{
    int result = (a + b);

    cout << endl
         << "Addition of  int + int: \t" << (a + b);

    return result;
}
float add(float a, float b)
{
    float result = (a + b);
    cout << endl
         << "Addition of float + float is:\t" << result;
    return result;
}

float add(int a, float b)
{
    float result = (a + b);
    cout << endl
         << "Addition of int + float is:\t" << result;
    return result;
}

float add(float a, int b)
{
    float result = (a + b);
    cout << endl
         << "Addition of float + int is:\t" << result;
    return result;
}

