class Complex {
    int imaginary, real;

    public:
    Complex();
    Complex(const int, const int);

    // getters
    int getImaginary();
    int getReal();

    // setters
    void setImaginary(const int);
    void setReal(const int);

    void display();
};