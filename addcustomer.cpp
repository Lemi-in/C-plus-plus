#include <iostream>
using namespace std;

struct Account
{
    char name[20];
    int accountNo;
    float balance;
};

void printAccount(const Account &account)
{
    if (account.balance < 200)
    {
        cout << "Name: " << account.name << endl;
        cout << "Account Number: " << account.accountNo << endl;
        cout << "Balance: $" << account.balance << endl;
    }
}

void addHundred(Account &account)
{
    if (account.balance > 1000)
    {
        account.balance += 100;
    }
}

int main()
{
    int size;
    cout << "Enter the number of accounts: ";
    cin >> size;

    Account account[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the account name: ";
        cin.getline(account[i].name, 20);
        cout << "Enter the account number: ";
        cin >> account[i].accountNo;
        cout << "Enter the account balance: ";
        cin >> account[i].balance;
    }

    cout << "\nAccounts with balance less than $200:\n";
    for (int i = 0; i < size; i++)
    {
        printAccount(account[i]);
    }

    cout << "\nAdding $100 to the balance for accounts with a balance of more than $1000:\n";
    for (int i = 0; i < size; i++)
    {
        addHundred(account[i]);
    }

    cout << "\nUpdated account balances:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << account[i].name << endl;
        cout << "Account Number: " << account[i].accountNo << endl;
        cout << "Balance: $" << account[i].balance << endl;
    }

    return 0;
}
