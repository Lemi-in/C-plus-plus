#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile;
    inFile.open("employees.txt");

    if (!inFile) {
        cout << "Error opening file" << endl;
        return 1;
    }

    cout << "Name\tPay Rate\tHours\tRegular Pay\tOvertime\tGross Pay\n";

    string name;
    double rate, regularPay, overtime, grossPay;
    int hours;

    while (inFile >> name >> rate >> hours) {
        if (hours <= 40) {
            regularPay = rate * hours;
            overtime = 0;
        } else {
            regularPay = rate * 40;
            overtime = (hours - 40) * rate * 1.5;
        }
        grossPay = regularPay + overtime;

        cout << name << "\t" << rate << "\t" << hours << "\t"
             << regularPay << "\t" << overtime << "\t" << grossPay << endl;
    }

    inFile.close();

    return 0;
}