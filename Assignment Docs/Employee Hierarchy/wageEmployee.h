#include "employee.h"

class WageEmployee : public Employee
{
    int numberOfHours;
    int ratePerHour;

public:
    WageEmployee() : numberOfHours(0), ratePerHour(50) {};
    WageEmployee(int numberOfHours, int ratePerHour, int id, const char *name, Date d) : Employee(id, name, d)
    {
        this->numberOfHours = numberOfHours;
        this->ratePerHour = ratePerHour;
    }
    WageEmployee(int numberOfHours, int ratePerHour, Employee emp) : Employee(emp)
    {
        this->numberOfHours = numberOfHours;
        this->ratePerHour = ratePerHour;
    }

    void display(const char *format = "WageEmployee details: ") override
    {
        Employee::display(format);

        cout << endl
             << "Displaying from wage employee class\t";

        cout << format << endl
             << "Hours worked: \t" << numberOfHours << endl
             << "Rate per hour: \t " << ratePerHour;
    }

    float calculateSalary() override
    {
        return (float)this->ratePerHour * this->numberOfHours;
    }
};