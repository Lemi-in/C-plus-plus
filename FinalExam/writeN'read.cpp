#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct User {
    string name;
    int id;
    char sex;
    float salary;

    void read() {
        cout << "Name: ";
        cin >> name;
        cout << "Id: ";
        cin >> id;
        cout << "SEX (M/F): ";
        cin >> sex;
        cout << "Salary: ";
        cin >> salary;
    }

    void display() const {
        cout << "Name: " << name << ", ID: " << id << ", Sex: " << sex << ", Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of users: ";
    cin >> n;
    User users[n];

    // Write user records to binary file
    ofstream outFile("test.txt", ios::binary);
    for (int i = 0; i < n; ++i) {
        cout << "Enter Information for user " << i + 1 << endl;
        users[i].read();
        outFile.write(reinterpret_cast<char*>(&users[i]), sizeof(User));
    }
    outFile.close();
    cout << "Records written to test.txt" << endl;

    // Read user records from binary file
    ifstream inFile("test.txt", ios::binary);
    User temp;
    cout << "\nReading records from test.txt:" << endl;
    while (inFile.read(reinterpret_cast<char*>(&temp), sizeof(User))) {
        temp.display();
    }
    inFile.close();

    return 0;
}
