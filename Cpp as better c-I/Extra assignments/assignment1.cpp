#include <iostream>
using namespace std;

int main()
{
     int a = 0;
     cout << endl
          << "size of Int is: \t" << sizeof(a);
     cout << endl
          << "size of float is: \t" << sizeof(float);
     cout << endl
          << "size of double is: \t" << sizeof(double);
     cout << endl
          << "size of char is: \t" << sizeof(char);
     cout << endl
          << "size of bool is: \t" << sizeof(bool);
     cout << endl
          << "size of printf('') is: \t" << sizeof(printf("")) << "because it returns a integer";
     cout << endl
          << "size of printf('') is: \t" << sizeof(printf("jayesh")) << "because it returns a integer";

     int arr[] = {1, 2};
     cout << endl
          << "size of array  is: \t" << sizeof(arr); 

     return 0;
}