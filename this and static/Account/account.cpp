#include "account.h"
#include <string.h>
#include <iostream>
using namespace std;

Account::Account()
{
    strcpy(name, "new Account");
    balance = 10000;
    accountNumber = ++accountCount;
}

Account::Account(const char *name, float balance)
{
    // as memory is already allocated
    strcpy(this->name, name);
    this->balance = balance;
    accountNumber = ++accountCount;
}

void Account::display()
{
    cout << endl
         << "Account Holders Name: " << this->name << endl
         << "Account Balance: " << this->balance << endl
         << "Account Number: " << this->accountNumber << endl;
}

int Account::updateIntRate(float newRate){
    intRate = newRate;
}