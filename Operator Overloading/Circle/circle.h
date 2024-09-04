class Circle
{
    int radius;
    static const float PI;

public:
    Circle();
    Circle(int);

    float calculateArea();
    float calculateCircumference();

    void display();

    Circle operator+(Circle &);
    Circle operator-(Circle &);

    Circle operator++(int);
    Circle operator++();

    Circle operator--(int);
    Circle operator--();

    bool operator>(Circle &);
    bool operator<(Circle &);
    bool operator==(Circle &);
};