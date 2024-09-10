#include "salesPerson.h"

int main()
{
     Employee emp1;
     emp1.display();

     WageEmployee wemp1;
     wemp1.display();
     cout << endl
          << "Salary of wage employee: " << wemp1.calculateSalary();

     SalesPerson sPerson;
     sPerson.display();
     cout << endl
          << "Salary of sales person: " << sPerson.calculateSalary();

     return 0;
}