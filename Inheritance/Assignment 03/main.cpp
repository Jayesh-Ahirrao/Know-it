#include <iostream>
#include <string.h>
using namespace std;

class Customer
{
    char *address;
    char *email;
    const float discount;

public:
    Customer() : discount(0)
    {
        // Dynamically allocate memory and copy the string literals
        address = new char[strlen("Pune") + 1];
        strcpy(address, "Pune");

        email = new char[strlen("example@gmail.com") + 1];
        strcpy(email, "example@gmail.com");
    }

    Customer(char *address, char *email, float discount) : discount(discount)
    {
        this->address = new char[strlen(address) + 1];
        strcpy(this->address, address);

        this->email = new char[strlen(email) + 1];
        strcpy(this->email, email);
    }

    Customer(float discount) : discount(discount)
    {
        address = new char[strlen("Pune") + 1];
        strcpy(address, "Pune");

        email = new char[strlen("example@gmail.com") + 1];
        strcpy(email, "example@gmail.com");
    };

    Customer(const Customer &obj) : discount(obj.discount)
    {
        address = new char[strlen(obj.address) + 1];
        strcpy(this->address, obj.address);

        email = new char[strlen(obj.email) + 1];
        strcpy(this->email, obj.email);
    };

    Customer &operator=(const Customer &obj)
    {
        if (this == &obj)
        {
            return *this; // checking self assignment
            // this is pointer holding the address of obj so this == &obj
        }

        // deallocating existing memory
        delete[] address;
        delete[] email;

        address = new char[strlen(obj.address) + 1];
        strcpy(this->address, obj.address);

        email = new char[strlen(obj.email) + 1];
        strcpy(this->email, obj.email);

        return *this;
    }

    ~Customer()
    {
        delete[] address;
        delete[] email;
    };

    virtual void accept()
    {
        cout << endl
             << "Enter the details of this customer";
        cout << endl
             << "Enter address of customer: ";
        cin >> address;
        cout << endl
             << "Enter email of customer";
        cin >> email;
    }

    virtual void giveDiscount(float price)
    {
        float currDiscout = (price * discount);
        price = price - currDiscout;
        cout << endl
             << "Discount: " << currDiscout << endl
             << "Price after discount: " << price << endl;
    }

    virtual void display()
    {
        cout << endl
             << "Address: " << address << endl
             << "Email: " << email << endl;
    }

    // accessors | getters
    const char *getAddress()
    {
        return address;
    }
    const char *getEmail()
    {
        return email;
    }
    float getDiscount()
    {
        return this->discount;
    }

    // mutators | setters
    void setAddress(char *address)
    {
        delete[] address;
        address = new char[strlen(address) + 1];
        strcpy(this->address, address);
    }
    void setEmail(char *email)
    {
        delete[] email;
        email = new char[strlen(email) + 1];
        strcpy(this->email, email);
    }
};

class RegCustomer : public Customer
{
    int regNumber;

public:
    RegCustomer() : regNumber(101), Customer(0.05f) {};
    RegCustomer(int regNumber) : regNumber(regNumber), Customer(0.05f) {};

    void accept() override
    {
        cout << endl
             << "Enter the details of this registered customer";
        Customer::accept();
        cout << endl
             << "Enter registration number of customer";
        cin >> regNumber;
    }

    void giveDiscount(float price) override
    {
        float currDiscout = (price * getDiscount());
        price = price - currDiscout;
        cout << endl
             << "Discount: " << currDiscout << endl
             << "Price after discount: " << price << endl;
    }

    void display() override
    {
        Customer::display();
        cout << endl
             << "Discount: " << getDiscount() << endl
             << "Registration number: " << regNumber;
    }
};

int main()
{
    int choice;
    Customer *ptr;

    cout << endl
         << "Select from following choices to create customer of type" << endl
         << "1. Customer\n"
         << "2. Registered customer\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        ptr = new Customer();
        break;
    case 2:
        ptr = new RegCustomer();
        break;
    default:
        exit(1);
        break;
    }

    ptr->accept();
    float price;
    cout << "Enter the price: ";
    cin >> price;

    ptr->giveDiscount(price);
    ptr->display();

    delete[] ptr;
}