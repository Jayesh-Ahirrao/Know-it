class Product
{
    char *name;
    int code;
    float unitPrice;

public:
    Product();
    Product(char *, int, float);
    Product(Product &productObj);
    ~Product();

    void display();
};