#include "student.h"
#include <string.h>
#include <iostream>
using namespace std;

Student::Student() : dateOfBirth(), dateOfAdmission()
{
    this->rollNum = 101;
    strcpy(this->name, "New Student");
}

Student::
    Student(int rollNum, const char *name, Date &datofbirthObj, Date &dateOfAdmissionObj)
    : dateOfBirth(dateOfAdmissionObj), dateOfAdmission(dateOfAdmissionObj)
{
    this->rollNum = rollNum;
    strcpy(this->name, name);
}

void Student::display()
{
    cout << endl
         << "Name of Student:\t " << this->name << endl
         << "Roll number of Student:\t " << this->rollNum;
    this->dateOfBirth.display("Date of Birth: ");
    this->dateOfAdmission.display("Date of Admission: ");

    cout << endl;
}

void Student::accept()
{
    cout << endl
         << "Enter name of the student \t";
    cin >> this->name;

    cout << endl
         << "Enter roll number of the student \t";
    cin >> this->rollNum;

    this->dateOfBirth.aceept("Enter the date of birth");
    this->dateOfAdmission.aceept("Enter the date of admission");
}