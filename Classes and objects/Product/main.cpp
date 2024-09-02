#include "product.h"

int main()
{
    Product p1;
    Product p2("Laptop", 1, 20.5f);
    Product p3(p2);

    p1.display();
    p2.display();
    p3.display();
}