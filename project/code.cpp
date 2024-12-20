#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

enum constant{ BANK_CODE = 1001,MIN_CAPACITY = 1000000};

struct name
{
    string f_name;
    string l_name;
};

struct Account {
    int id;
    name names;
    string password;
    double balance;
    string userType;
    bool operator<(const Account& acc1) const {
        return this->names.f_name < acc1.names.f_name;
    }
};

class BankSystem {
    private:
        int userID = -1;
        Account local;

    public:
        void mainMenu() {
            int menu;
            cout << "\t\t\tWelcome to the Bank of BroCode" << endl;
            cout << "\t\t\t\t\t\t*******************************************\n";
            cout << "\t\t\t\t\t\t**                                       **\n";
            cout << "\t\t\t\t\t\t**   --Main Menu --                      **\n";
            cout << "\t\t\t\t\t\t**                                       **\n";
            cout << "\t\t\t\t\t\t**       Enter 1 to create new account   **\n";
            cout << "\t\t\t\t\t\t**       Enter 2 for balance inquiry     **\n";
            cout << "\t\t\t\t\t\t**       Enter 3 to deposit              **\n";
            cout << "\t\t\t\t\t\t**       Enter 4 to withdraw             **\n";
            cout << "\t\t\t\t\t\t**       Enter 5 to view profile         **\n";
            cout << "\t\t\t\t\t\t**       Enter 6 to delete account       **\n";
            cout << "\t\t\t\t\t\t**       Enter 0 to Logout               **\n";
            cout << "\t\t\t\t\t\t**       Enter 7 if you are a manager    **\n";
            cout << "\t\t\t\t\t\t**                                       **\n";
            cout << "\t\t\t\t\t\t*******************************************\n";
            cout << "\t\t\tEnter Your Choice here ->";
            cin.clear();
            cin >> menu;
            myChoice(menu);
        }

        void myChoice(int menu) {
            if (menu < 0 || menu > 7) {
                clearTerminal();
                Message("Invalid Choice");
                mainMenu();
            } else if (menu == 0) {
                clearTerminal();
                Message("Logout successful. Thank you for using our service.");
                userID = -1;
                mainMenu();
            } else if (menu == 1) {
                clearTerminal();
                Message("Create New Account");
                createAccount();
            } else {
                if (userID < 0) {
                    clearTerminal();
                    Message("Please Login to your account first.");
                    Login(menu);
                } else {
                    switch (menu) {
                        case 2:
                            clearTerminal();
                            Message(local.names.f_name + "'s Balance -> $" + to_string(local.balance));
                            mainMenu();
                            break;
                        case 3:
                            clearTerminal();
                            double depositAmount;
                            Message(local.names.f_name + "'s Balance -> $" + to_string(local.balance));
                            cout << "\t\t\tDeposit amount ( > 0) -> ";
                            cin >> depositAmount;
                            if (depositAmount <= 0) {
                                Message("Invalid Amount!");
                                mainMenu();
                            } else {
                                handleTransaction(depositAmount);
                            }
                            break;
                        case 4:
                            clearTerminal();
                            double withdrawAmount;
                            Message(local.names.f_name + " " + local.names.l_name  + "'s Balance -> $" + to_string(local.balance));
                            cout << "\t\t\tWithdrawal amount ( > 0) -> ";
                            cin >> withdrawAmount;
                            if (withdrawAmount <= 0 || withdrawAmount > local.balance) {
                                Message("Invalid Amount!");
                                mainMenu();
                            } else {
                                handleTransaction(-withdrawAmount);
                            }
                            break;
                        case 5:
                            clearTerminal();
                            myprofile();
                            break;
                        case 6:
                            clearTerminal();
                            deleteAccount();
                            break;
                        case 7:
                            clearTerminal();
                            local.userType == "manager" ? 
                                managerMenu():
                                Message("You are not a manager");
                            mainMenu();
                            break;
                    }
                }
            }
        }

        void createAccount() {
            fstream database("database.txt", ios::out | ios::app);
            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                mainMenu();
                return;
            }

            Account newAccount;
            string userType = "client";

            newAccount.id = (BANK_CODE * MIN_CAPACITY) + (countUsers() + 1);

            cout << "Enter your first name: ";
            cin >> newAccount.names.f_name;
            cout << "Enter your last name: ";
            cin >> newAccount.names.l_name;
            cout << "Enter your password: ";
            cin.ignore();
            getline(cin, newAccount.password);
            cout << "Enter your initial deposit: ";
            cin >> newAccount.balance;
            if (local.userType == "manager") {
                cout << "Enter user type (manager/client, default is client): ";
                cin >> userType;
            }

            newAccount.userType = userType;

            database << newAccount.id << " " << newAccount.names.f_name << " " << newAccount.names.l_name << " " << newAccount.password << " " << newAccount.balance << " " << newAccount.userType << endl;
            database.close();

            clearTerminal();
            Message("Account created successfully! Your account ID is " + to_string(newAccount.id));
            mainMenu();
        }

        void Login(int& menu) {
            fstream database("database.txt", ios::in);

            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                mainMenu();
            }

            int loginID;
            string password;

            cout << "Enter your account ID: ";
            cin >> loginID;
            cout << "Enter your password: ";
            cin.ignore();
            getline(cin, password);

            Account account;
            while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                if (account.id == loginID && account.password == password) {
                    userID = (loginID) - (BANK_CODE * MIN_CAPACITY);
                    clearTerminal();
                    Message("Logged in successfully. Welcome, " + account.names.f_name + "!");

                    local.id = account.id;
                    local.names = account.names;
                    local.balance = account.balance;
                    local.password = account.password;
                    local.userType = account.userType;

                    userID++;
                    myChoice(menu);
                    database.close();
                    return;
                }
            }
            database.close();
            clearTerminal();
            Message("Login failed. Invalid account ID or password.");
            mainMenu();
        }

        void myprofile() {
            clearTerminal();
            cout << "\t\t\t\t\t\t***************************************************\n";
            cout << "\t\t\t\t\t\t**                                                 \n";
            cout << "\t\t\t\t\t\t**   --" << local.names.f_name + " " + local.names.l_name << "'s Profile --   \n";
            cout << "\t\t\t\t\t\t**                                                 \n";
            cout << "\t\t\t\t\t\t**       Balance: $" << local.balance            << endl;
            cout << "\t\t\t\t\t\t**       Password: ";
            for (int i = 0; i < local.password.length(); ++i) cout << "#";
            cout << "\n\t\t\t\t\t\t*************************************************\n";

            int th;
                    cout << "\t\t\t\t\t Enter 13 to update your account, any other number to main menu =>";
            cin >> th;
            if (th != 13) {
                clearTerminal();
                mainMenu();
            } else {
                cout << "\t\t\t\tEnter 1 to update your Name, 3 to update your password =>";
                cin >> th;
                if (th == 1) {
                    cout << "\t\t\t\tEnter your new first name =>";
                    cin >> local.names.f_name;
                    cout << "\t\t\t\tEnter your new last name =>";
                    cin >> local.names.l_name;

                    updateProfileInDatabase();
                } else if (th == 3) {
                    string old_password;
                    cout << "\t\t\t\tEnter your old password =>";
                    cin.ignore();
                    getline(cin, old_password);

                    if (old_password == local.password) {
                        cout << "\t\t\t\tEnter your new password =>";
                        getline(cin, local.password);
                        updateProfileInDatabase();
                    } else {
                        myprofile();
                    }
                } else {
                    myprofile();
                }
            }
        }

        void updateProfileInDatabase() {
            fstream database("database.txt", ios::in);
            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                mainMenu();
                return;
            }

            Account account;
            bool found = false;
            vector<Account> accounts;

            while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                if (account.id == local.id) {
                    account.names = local.names;
                    account.password = local.password;
                    found = true;
                }
                accounts.push_back(account);
            }

            database.close();

            if (!found) {
                clearTerminal();
                Message("User not found in the database.");
                mainMenu();
                return;
            }

            database.open("database.txt", ios::out | ios::trunc);
            if (!database.is_open()) {
                clearTerminal();
                Message("Error opening database for writing");
                mainMenu();
                return;
            }

            for (const auto& acc : accounts) {
                database << acc.id << " " << acc.names.f_name <<" "<<acc.names.l_name<< " " << acc.password << " " << acc.balance << " " << acc.userType << endl;
            }

            database.close();

            clearTerminal();
            Message("Profile updated successfully!");
            mainMenu();
        }

        void handleTransaction(double amount) {
            clearTerminal();
            fstream database("database.txt", ios::in | ios::out);

            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                mainMenu();
                return;
            }

            vector<Account> accounts;
            Account account;

            while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                if (account.id == local.id) {
                    account.balance += amount;
                    local.balance += amount;
                }
                accounts.push_back(account);
            }

            database.close();

            database.open("database.txt", ios::out | ios::trunc);
            if (!database.is_open()) {
                clearTerminal();
                Message("Error opening database for writing");
                mainMenu();
                return;
            }

            for (const auto& acc : accounts) {
                database << acc.id << " " << acc.names.f_name << " "<<acc.names.l_name << " " << acc.password << " " << acc.balance << " " << acc.userType << endl;
            }

            database.close();

            if (amount > 0) {
                Message("$" + to_string(amount) + " was deposited to your account. New balance: $" + to_string(local.balance));
            } else {
                Message("$" + to_string(-amount) + " was withdrawn from your account. New balance: $" + to_string(local.balance));
            }

            mainMenu();
        }

        void deleteAccount() {
            fstream database("database.txt", ios::in);
            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                mainMenu();
                return;
            }

            vector<Account> accounts;
            Account account;
            bool found = false;

            while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                if (account.id == local.id) {
                    found = true;
                } else {
                    accounts.push_back(account);
                }
            }

            database.close();

            if (!found) {
                clearTerminal();
                Message("User not found in the database.");
                mainMenu();
                return;
            }

            database.open("database.txt", ios::out | ios::trunc);
            if (!database.is_open()) {
                clearTerminal();
                Message("Error opening database for writing");
                mainMenu();
                return;
            }

            for (const auto& acc : accounts) {
                database << acc.id << " " << acc.names.f_name<< " " << acc.names.l_name << " " << acc.password << " " << acc.balance << " " << acc.userType << endl;
            }

            database.close();

            clearTerminal();
            Message("Account deleted successfully.");
            userID = -1;
            mainMenu();
        }

        void managerMenu() {
            int menu;
            cout << "\t\t\t\t\t\t********************************************************************************\n";
            cout << "\t\t\t\t\t\t**                                                                            **\n";
            cout << "\t\t\t\t\t\t**             -- Manager Menu --                                             **\n";
            cout << "\t\t\t\t\t\t**                                                                            **\n";
            cout << "\t\t\t\t\t\t**       Enter 1 to view all accounts                                         **\n";
            cout << "\t\t\t\t\t\t**       Enter 2 to apply interest                                            **\n";
            cout << "\t\t\t\t\t\t**       Enter 3 to clear database                                            **\n";
            cout << "\t\t\t\t\t\t**       Enter 4 to view all accounts sorted alpahbetic order of their names  **\n";
            cout << "\t\t\t\t\t\t**       Enter 5 to search a specific account                                 **\n";
            cout << "\t\t\t\t\t\t**       Enter 0 to logout                                                    **\n";
            cout << "\t\t\t\t\t\t**                                                                            **\n";
            cout << "\t\t\t\t\t\t********************************************************************************\n";
            cout << "\t\t\tEnter Your Choice here ->";
            cin >> menu;

            switch (menu) {
                case 0:
                    clearTerminal();
                    Message("Logout successful. Thank you for using our service.");
                    userID = -1;
                    mainMenu();
                    break;
                case 1:
                    clearTerminal();
                    viewAllAccounts();
                    break;
                case 2:
                    clearTerminal();
                    applyInterest();
                    break;
                case 3:
                    clearTerminal();
                    clearDatabase();
                    break;
                case 4:
                clearTerminal();
                printalphabetically();
                    break; 
                case 5:
                clearTerminal();
                searchaccount();
                break;
                default:
                    clearTerminal();
                    Message("Invalid Choice");
                    managerMenu();
                    break;
            }
        }

        void viewAllAccounts() {
            fstream database("database.txt", ios::in);
            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                managerMenu();
                return;
            }

            clearTerminal();
            cout << "\t\t\t\t\t\t*******************************************\n";
            cout << "\t\t\t\t\t\t**         All Accounts                   **\n";
            cout << "\t\t\t\t\t\t*******************************************\n";
            cout << "\t\t\t" << setw(10) << "ID" << setw(20) << "First Name" << setw(15)<<"Last name" << setw(15)<< "Balance" << setw(15) << "User Type" << endl;
            cout << "\t\t\t-------------------------------------------------------------------------------------\n";

            Account account;
            int totalAccounts = 0;
            double totalMoney = 0.0;
            int totalManagers = 0;
            int totalClients = 0;

            while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                cout << "\t\t\t" << setw(10) << account.id << setw(20) << account.names.f_name << setw(20)<<account.names.l_name<< setw(15) << fixed << setprecision(2) << account.balance << setw(15) << account.userType << endl;
                totalAccounts++;
                totalMoney += account.balance;
                if (account.userType == "manager") {
                    totalManagers++;
                } else if (account.userType == "client") {
                    totalClients++;
                }
            }

            database.close();
            cout << "\t\t\t-------------------------------------------------------------------------------------\n";
            cout << "\t\t\tTotal accounts: " << totalAccounts << endl;
            cout << "\t\t\tTotal money: $" << fixed << setprecision(2) << totalMoney << endl;
            cout << "\t\t\tTotal managers: " << totalManagers << endl;
            cout << "\t\t\tTotal clients: " << totalClients << endl;
            cout << "\t\t\t-------------------------------------------------------------------------------------\n\n\n";
            managerMenu();
        }

        void applyInterest() {
            fstream database("database.txt", ios::in);
            if (!database.is_open()) {
                clearTerminal();
                Message("Database not found");
                managerMenu();
                return;
            }

            double interestRate;
            cout << "Enter the interest rate (e.g., for 5% enter 0.05): ";
            cin >> interestRate;

            vector<Account> accounts;
            Account account;

            while (database >> account.id >> account.names.f_name >>account.names.l_name >> account.password >> account.balance >> account.userType) {
                account.balance += account.balance * interestRate;
                accounts.push_back(account);
            }

            database.close();

            database.open("database.txt", ios::out | ios::trunc);
            if (!database.is_open()) {
                clearTerminal();
                Message("Error opening database for writing");
                managerMenu();
                return;
            }

            for (const auto& acc : accounts) {
                database << acc.id << " " << acc.names.f_name << " " << acc.names.l_name << " " << acc.password << " " << acc.balance << " " << acc.userType << endl;
            }

            database.close();

            clearTerminal();
            Message("Interest applied to all accounts.");
            managerMenu();
        }

        void clearDatabase() {
            ofstream database("database.txt");
            database.close();

            clearTerminal();
            Message("Database cleared.");
            managerMenu();
        }

        void Message(const string& message) {
            cout << "\t\t\t\t*******************************************************************\n";
            cout << "\t\t\t\t\t" << message << endl;
            cout << "\t\t\t\t*******************************************************************\n";
        }

        void clearTerminal() {
            system("cls");
        }

        int countUsers() {
            fstream database("database.txt", ios::in);
            if (!database.is_open()) {
                return 0;
            }

            int count = 0;
            string line;
            while (getline(database, line)) {
                if (!line.empty()) {
                    count++;
                }
            }
            database.close();
            return count;
        }

        void printalphabetically(){
            fstream database("database.txt", ios::in);
                    if (!database.is_open()) {
                        clearTerminal();
                        Message("Database not found");
                        managerMenu();
                        return;
                    }

                    vector<Account> accounts;
                    Account account;

                    while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                        accounts.push_back(account);
                    }
                    clearTerminal();
                    cout << "\t\t\t\t\t\t*******************************************\n";
                    cout << "\t\t\t\t\t\t** All Accounts sorted out alphabetically**\n";
                    cout << "\t\t\t\t\t\t*******************************************\n";
                    cout << "\t\t\t" << setw(10) << "ID" << setw(20) << "First Name" << setw(15) <<"Last Name"<<setw(15)<< "Balance" << setw(15) << "User Type" << endl;
                    cout << "\t\t\t--------------------------------------------------------------------------------------\n";

                    sort(accounts.begin(),accounts.end());
                    for (const auto& acc : accounts) {
                        cout << "\t\t\t" << setw(10) << acc.id << setw(20) << acc.names.f_name<< setw(15)<<account.names.l_name << setw(15) << fixed << setprecision(2) << account.balance << setw(15) << account.userType << endl;
                    }
                    cout << "\t\t\t--------------------------------------------------------------------------------------\n\n\n";
                    database.close();
                    managerMenu();
        }
        
        void searchaccount(){
            fstream database("database.txt", ios::in);
                    if (!database.is_open()) {
                        clearTerminal();
                        Message("Database not found");
                        managerMenu();
                        return;
                    }
                    int id;
                    cout<<"enter the client's Account-ID: ";
                    cin>>id;
                    Account account;

                    while (database >> account.id >> account.names.f_name>>account.names.l_name >> account.password >> account.balance >> account.userType) {
                        if (account.id==id)
                        {
                    cout << "\t\t\t" << setw(10) << "ID" << setw(20) << "First Name" << setw(15) <<"Last Name"<<setw(15)<< "Balance" << setw(15) << "User Type" << endl;
                    cout << "\t\t\t------------------------------------------------------------------------------------------------------------\n";
                    cout << "\t\t\t" << setw(10) << account.id << setw(20) << account.names.f_name<<setw(15)<<account.names.l_name << setw(15) << fixed << setprecision(2) << account.balance << setw(15) << account.userType << endl;
                    cout << "\t\t\t------------------------------------------------------------------------------------------------------------\n\n\n";
                    database.close();
                    managerMenu();
                    return;}}
                        cerr<<"account not found\n";}
        };

int main() {
    BankSystem bankSystem;
    bankSystem.mainMenu();
    return 0;
}
