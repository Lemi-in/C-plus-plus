#include <iostream>

using namespace std;

int main() {
    const int maxAccounts = 100;
    int accountNumbers[maxAccounts];
    int passwords[maxAccounts];
    float balances[maxAccounts];
    bool isOpen[maxAccounts];

    char choice;
    float initialDepo, newDepo, withdrawal;
    char close;
    int userAccount, userPass;
    char identity;
    int totalAccounts = 0; 
    const int managerPin = 132312;
    int managerPass;

    do {
        cout << "Enter M if you are a manager.\nEnter C if you are a customer " << endl;
        cout << "Enter your choice: ";
        cin >> identity;

        if (toupper(identity) == 'C') {
            cout << "\n";
            cout << "Welcome customer. What transaction would you like to do? " << endl;
            cout << "\n";

            cout << "Please select \n1. O to open a new account\n2. B for balance inquiry\n3. D for deposit\n"
                 << "4. W for withdrawal\n5. C to close the account\n6. I to compute interest\n"
                 << "7. P for account information\n8. E to Exit the program " << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (toupper(choice)) {
                case 'O': {
                    cout << "Welcome to Horan bank! Follow the steps to finish creating your account" << endl;
                    cout << "Create a password: ";
                    cin >> userPass;
                    accountNumbers[totalAccounts] = 1001000 + totalAccounts;
                    passwords[totalAccounts] = userPass;
                    isOpen[totalAccounts] = true;

                    cout << "Enter an initial deposit for your account: ";
                    cin >> initialDepo;
                    balances[totalAccounts] = initialDepo;

                    cout << "You have successfully created your account." << endl;
                    cout << "Your account number is " << accountNumbers[totalAccounts]
                         << " And your current balance is " << initialDepo << " Birr" << endl;

                    totalAccounts++;
                    break;
                }
                case 'B': {
                    cout << "Enter your account number and password respectively." << endl;
                    cout << "Enter your account number: ";
                    cin >> userAccount;
                    cout << "Enter your Password: ";
                    cin >> userPass;

                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == userAccount && passwords[i] == userPass && isOpen[i]) {
                            cout << "Welcome to your account! " << endl;
                            cout << "Your balance is " << balances[i] << " Birr" << endl;
                            break;
                        } else if (i == totalAccounts - 1) {
                            cout << "Incorrect Account number or Password or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'D': {
                    cout << "Enter your account number and password respectively." << endl;
                    cout << "Enter your account number: ";
                    cin >> userAccount;
                    cout << "Enter your Password: ";
                    cin >> userPass;

                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == userAccount && passwords[i] == userPass && isOpen[i]) {
                            cout << "Enter the amount of money you want to deposit: ";
                            cin >> newDepo;
                            balances[i] += newDepo;

                            cout << "Your account number is " << accountNumbers[i]
                                 << " and your current balance is " << balances[i] << " Birr" << endl;

                            break;
                        } else if (i == totalAccounts - 1) {
                            cout << "Incorrect Account number or Password or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'W': {
                    cout << "Enter your account number and password respectively." << endl;
                    cout << "Enter your account number: ";
                    cin >> userAccount;
                    cout << "Enter your Password: ";
                    cin >> userPass;

                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == userAccount && passwords[i] == userPass && isOpen[i]) {
                            cout << "Enter the amount of money you want to withdraw: ";
                            cin >> withdrawal;

                            if (withdrawal <= balances[i]) {
                                balances[i] -= withdrawal;
                                cout << "Your current balance after withdrawal is " << balances[i] << " Birr"
                                     << endl;
                            } else {
                                cout << "You have insufficient balance!" << endl;
                            }

                            break;
                        } else if (i == totalAccounts - 1) {
                            cout << "Incorrect Account number or Password or account is not open." << endl;
                        }
                    }
                    break;
                }
                case 'C': {
                    cout << "Enter your account number and password respectively." << endl;
                    cout << "Enter your account number: ";
                    cin >> userAccount;
                    cout << "Enter your Password: ";
                    cin >> userPass;

                    for (int i = 0; i < totalAccounts; ++i) {
                        if (accountNumbers[i] == userAccount && passwords[i] == userPass && isOpen[i]) {
                            cout << "Do you want to close your account? Enter 'Y' if yes and 'N' if no " << endl;
                            cin >> close;

                            if (toupper(close) == 'Y') {
                                for (int j = i; j < totalAccounts - 1; ++j) {
                                    accountNumbers[j] = accountNumbers[j + 1];
                                    passwords[j] = passwords[j + 1];
                                    balances[j] = balances[j + 1];
                                    isOpen[j] = isOpen[j + 1];
                                }

                                totalAccounts--;
                                cout << "You have closed your account successfully." << endl;
                            }

                            break;
                        } else if (i == totalAccounts - 1) {
                            cout << "Incorrect Account number or Password or account is not open." << endl;
                        }
                    }
                    break;
                }
              
               
                default:
                    break;
            }}
        
          else if (toupper(identity) == 'M') {
            cout<<"Enter enter the Password to run as a manager: ";
            cin>>managerPass;
            char managerChoice;
            if(managerPass == managerPin) {
                    cout<<" Select the transaction you want to see"<<endl;
                    cout<<" Selet\n P to see account information\n I to the interest rate\n E to clear all acounts: "<<endl;
                    cout<<"Enter your choice: ";
                    cin>>managerChoice;

                    switch (toupper(managerChoice))
                    {
                
                    case 'I': {
                    float interestRate;
                    cout << "Enter the interest rate: " << endl;
                    cin >> interestRate;
 
                    cout << "Account number       Balance   " << endl;
                    cout << "_____________________________" << endl;
                    for (int i = 0; i < totalAccounts; ++i) {
                            balances[i] *= (1 + interestRate);
                            cout<< "||" << accountNumbers[i] << "\t\t " << balances[i]<< "||" << endl;
                            cout << "_____________________________" << endl;
                            
                       
                    }
                          
                    
                   
                  }
                    break;
                    case 'P':
                        cout << "Account number       Balance   " << endl;
                        cout << "_____________________________" << endl;
                        for (int i = 0; i < totalAccounts; ++i) {
                               
                                cout << accountNumbers[i] << "\t\t " << balances[i] << endl;
                                cout << "_____________________________" << endl;
                            break;
                        
                   
                    }
                
                    case 'E':
                        cout << "Do you want to close all accounts ? Enter 'Y' if yes and 'N' if no " << endl;
                                cin >> close;

                                if (toupper(close) == 'Y') {
                                    choice = 'E';
                                    cout << "You have successfully closed all accouts." << endl;
                                    continue;
                                   ;
                                }

                                
            }
            }
            else {
                cout<<"Acces denied. You are not the manager: "<<endl;
            }


    
        }
    }while (choice != 'E');
    return 0;
}