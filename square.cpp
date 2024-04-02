#include <iostream>
using namespace std;

void square(int &num) {
    num *= num;
}

void square(double &num) {
    num *= num;
}

int main() {
    int intNum = 5;
    double doubleNum = 3.5;
    
    square(intNum);
    square(doubleNum);
    
    cout << "The square of the integer: " << intNum << endl;
    cout << "The square of double: " << doubleNum << endl;

    return 0;
}
