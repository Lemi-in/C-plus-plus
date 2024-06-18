#include <iostream>
using namespace std;

void calcQuotient(double n1, double n2, double &answer) {
    if (n2 != 0) {
        answer = n1 / n2;
    } else {
        cout << "Division by zero!" << endl;
    }
}

int main() {
    double num1, num2, quotient;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    calcQuotient(num1, num2, quotient);
    cout << "Quotient: " << quotient << endl;

    return 0;
}
