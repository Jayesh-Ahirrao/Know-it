#include <iostream>
using namespace std;

class Exp
{
public:
    void display()
    {
        cout << "This is an instance of Exp class." << endl;
    }
    void display(int a, int b = 0)
    {
        cout << "Two args: " << a << endl;
    }
};

int main(int argCount, char **ags)
{
    Exp e;
    e.display();
}