#include "date.h"
#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int id;
    char *name;
    Date dob;

public:
    Employee() : id(1), name(new char[strlen("employee") + 1]), dob(1, 1, 2024)
    {
        // made memory available in MIL
        strcpy(this->name, "employee");
    };

    Employee(int id, const char *name, Date d) : id(id), dob(d)
    {
        this->name = new char[strlen("employee") + 1];
        strcpy(this->name, name);
    };

    Employee(Employee &empObj)
    {
        this->id = empObj.id;
        this->dob = empObj.dob;
        this->name = new char[strlen(empObj.name) + 1];
        strcpy(this->name, empObj.name);
    }

    ~Employee()
    {
        delete[] name;
    }
    virtual void display(const char *format = "Employee details: ")
    {
        cout << "\n\nDisplaying from employee class \n"
             << format
             << "name: \t" << name << endl
             << "id: \t" << id << endl;
        dob.display("Date of birth: \t");
    }

    virtual float calculateSalary() {};
};