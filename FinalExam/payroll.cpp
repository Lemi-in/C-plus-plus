#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Define a structure to hold employee data
struct Employee {
    int number;
    string name;
    double rate;
    int hours;
};

// Function to read employee data interactively
template <typename T>
void readData(vector<T>& employees) {
    for (size_t i = 0; i < employees.size(); ++i) {
        cout << "Enter details for employee " << (i + 1) << ":\n";
        cout << "Number: ";
        cin >> employees[i].number;
        cin.ignore(); // To ignore the newline character after entering the number
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Rate: ";
        cin >> employees[i].rate;
        cout << "Hours: ";
        cin >> employees[i].hours;
        cout << endl;
    }
}

// Function to calculate and print the payroll report into a text file
template <typename T>
void calculateAndPrintPayroll(const vector<T>& employees) {
    ofstream outFile("payroll_report.txt");
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    outFile << "Payroll Report\n";
    outFile << "----------------------------------------\n";
    outFile << "Number\tName\t\tGross Pay\tNet Pay\n";
    outFile << "----------------------------------------\n";

    for (const auto& emp : employees) {
        double grossPay = emp.rate * emp.hours * 80;
        double tax = grossPay * 0.15;
        double pension = grossPay * 0.07;
        double netPay = grossPay - tax - pension;

        outFile << emp.number << "\t" << emp.name << "\t\t" << grossPay << "\t" << netPay << "\n";
    }

    outFile << "----------------------------------------\n";
    outFile.close();

    cout << "Payroll report generated successfully in payroll_report.txt" << endl;
}

int main() {
    const int numEmployees = 3;
    vector<Employee> employees(numEmployees);

    // Read employee data
    readData(employees);

    // Calculate and print payroll report
    calculateAndPrintPayroll(employees);

    return 0;
}
