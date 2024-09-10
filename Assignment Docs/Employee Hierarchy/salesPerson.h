#include "wageEmployee.h"

class SalesPerson : public WageEmployee
{
    int itemsSold;
    float commissionPerItem;

public:
    SalesPerson() : itemsSold(0), commissionPerItem(0.1f) {};
    SalesPerson(int itemsSold, float commissionPerItem, WageEmployee wageEmployee) : itemsSold(itemsSold), commissionPerItem(commissionPerItem), WageEmployee(wageEmployee) {};
    SalesPerson(int itemsSold, float commissionPerItem, int numberOfHours, int ratePerHour, Employee emp) : itemsSold(itemsSold), commissionPerItem(commissionPerItem), WageEmployee(numberOfHours, ratePerHour, emp) {};
    SalesPerson(int itemsSold, float commissionPerItem, int numberOfHours, int ratePerHour, int id, const char *name, Date d) : itemsSold(itemsSold), commissionPerItem(commissionPerItem), WageEmployee(numberOfHours, ratePerHour, id, name, d) {};

    void display(const char *format = "Sales Person details: ") override
    {
        WageEmployee::display("");
        cout << endl
             << "Displaying from Sales Person class\t";

        cout << format << endl
             << "Items Sold: \t" << itemsSold << endl
             << "Commission per Item: " << commissionPerItem;
    }

    float calculateSalary() override
    {
        return (float)this->itemsSold * this->commissionPerItem;
    }
};