#include <iostream>
using namespace std;

int multiply(int num1 = 1, int num2 = 2, int num3 = 3)
{
    return num1 * num2 * num3;
}

int main()
{

    int num1, num2, num3;
    cout << endl
         << "Enter first number " << endl;
    cin >> num1;

    cout << endl
         << "Enter second number " << endl;
    cin >> num2;

    cout << endl
         << "Enter third number " << endl;
    cin >> num3;

    cout << multiply(num1) << endl;
    cout << multiply(num1, num2) << endl;
    cout << multiply(num1, num2, num3) << endl;

    return 0;
}