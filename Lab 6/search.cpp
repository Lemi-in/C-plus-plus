#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Customer {
    int accountNumber;
    string firstName;
    string lastName;
    double accountBalance;
};

int main() {
    Customer customers[5];
    ifstream file("customers.txt");

    for (int i = 0; i < 5; i++) {
        file >> customers[i].accountNumber >> customers[i].firstName >> customers[i].lastName >> customers[i].accountBalance;
    }

    file.close();

    int accountNumber;
    cout << "Enter an account number: ";
    cin >> accountNumber;

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (customers[i].accountNumber == accountNumber) {
            cout << "Name: " << customers[i].firstName << " " << customers[i].lastName << endl;
            cout << "Account Balance: $" << customers[i].accountBalance << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Customer not found." << endl;
    }

    return 0;
}
