#include <iostream>
#include <iomanip>

using namespace std;

const int maxAccounts = 100;
int accountNumbers[maxAccounts];
int pins[maxAccounts];
float balances[maxAccounts];
bool isOpen[maxAccounts];

int totalAccounts = 0;  
const int managerPin = 1234;  

int main() {
    char transactionType;
    int pin;

    while (true) {
        cout << "Transaction type ? ";
        cin >> transactionType;

        if (transactionType == 'S') {
            cout << "Enter manager pin: ";
            cin >> pin;
            if (pin == managerPin) {
                cout << "Bank is open for transactions." << endl;
            } else {
                cout << "Invalid manager pin. Access denied." << endl;
            }
        } else if (transactionType == 'O' || transactionType == 'B' || transactionType == 'D' ||
                   transactionType == 'W' || transactionType == 'C' || transactionType == 'I' ||
                   transactionType == 'P' || transactionType == 'E') {
            cout << "Enter account pin: ";
            cin >> pin;

            switch (transactionType) {
                case 'O': {
                    float initialDeposit;
                    cout << "Initial deposit? ";
                    cin >> initialDeposit;
                    if (totalAccounts < maxAccounts) {
                        accountNumbers[totalAccounts] = 1001 + totalAccounts;
                        pins[totalAccounts] = pin;
                        balances[totalAccounts] = initialDeposit;
                        isOpen[totalAccounts] = true;
                        cout << "Account successfully opened. Your account number is "
                             << accountNumbers[totalAccounts] << endl;
                        totalAccounts++;
                    } else {
                        cout << "Cannot open more accounts. Maximum limit reached." << endl;
                    }
                    break;
                }
                case 'B': {
                    int accountNumber;
                    cout << "Account number? ";
                    cin >> accountNumber;
                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == accountNumber && pins[i] == pin && isOpen[i]) {
                            cout << "Account number: " << accountNumbers[i]
                                 << ", Balance: " << balances[i] << endl;
                            break;
                        }
                        if (i == totalAccounts - 1) {
                            cout << "Invalid account number or pin or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'D': {
                    int accountNumber;
                    float amount;
                    cout << "Account number? ";
                    cin >> accountNumber;
                    cout << "Amount? ";
                    cin >> amount;
                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == accountNumber && pins[i] == pin && isOpen[i]) {
                            balances[i] += amount;
                            cout << "Deposit successful. New balance: " << balances[i] << endl;
                            break;
                        }
                        if (i == totalAccounts - 1) {
                            cout << "Invalid account number or pin or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'W': {
                    int accountNumber;
                    float amount;
                    cout << "Account number? ";
                    cin >> accountNumber;
                    cout << "Amount? ";
                    cin >> amount;
                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == accountNumber && pins[i] == pin && isOpen[i]) {
                            if (amount <= balances[i]) {
                                balances[i] -= amount;
                                cout << "Withdrawal successful. New balance: " << balances[i] << endl;
                            } else {
                                cout << "Insufficient funds for withdrawal." << endl;
                            }
                            break;
                        }
                        if (i == totalAccounts - 1) {
                            cout << "Invalid account number or pin or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'C': {
                    int accountNumber;
                    cout << "Account number? ";
                    cin >> accountNumber;
                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == accountNumber && pins[i] == pin && isOpen[i]) {
                            for (int j = i; j < totalAccounts - 1; ++j) {
                                accountNumbers[j] = accountNumbers[j + 1];
                                pins[j] = pins[j + 1];
                                balances[j] = balances[j + 1];
                                isOpen[j] = isOpen[j + 1];
                            }
                            totalAccounts--;
                            cout << "Account closed successfully." << endl;
                            break;
                        }
                        if (i == totalAccounts - 1) {
                            cout << "Invalid account number or pin or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'I': {
                    float interestRate;
                    cout << "Interest rate? ";
                    cin >> interestRate;
                    for (int i = 0; i < totalAccounts; ++i) {
                        balances[i] *= (1 + interestRate);
                    }
                    cout << "Interest computed and applied to all accounts." << endl;
                    break;
                }
                case 'P': {
                    cout << "_____________________________" << endl;
                    cout << "  Account number    Balance   " << endl;
                    for (int i = 0; i < totalAccounts; ++i) {
                        cout << setw(12) << accountNumbers[i] << "\t\t "
                             << setw(10) << fixed << setprecision(2) << balances[i] << endl;
                    }
                    cout << "_____________________________" << endl;
                    break;
                }
                case 'E':
                    cout << "Closing all accounts. Exiting program." << endl;
                    return 0;
            }
        } else {
            cout << "Invalid transaction type." << endl;
        }
    }

    return 0;
}
