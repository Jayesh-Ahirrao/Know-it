class Complex
{

    int img, real;

public:
    Complex();
    Complex(int, int);

    void display();
    void accept();

    // operator overloading : Binary
    Complex operator+(Complex &);
    Complex operator-(Complex &);
    Complex operator*(Complex &);

    // operator overloading : Unary
    // Complex operator++(int a); //the one with int value act as post increment
    Complex operator++(int); // the one with int value act as post increment
    Complex operator++();

    friend Complex operator+(int, const Complex &);
};