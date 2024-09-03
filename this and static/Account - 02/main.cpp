#include "account.h"

int Account::accountCount = 0;
float Account::intRate = 0.0;
int Account::activeAccountCounts = 0;

int main()
{
    Account a1;
    Account a2("User", 12000);

    a1.display();
    a2.display();

    Account::displayActiveAccounts();

    {
        Account a3;
        Account::displayActiveAccounts();
    }

    Account::displayActiveAccounts();
}