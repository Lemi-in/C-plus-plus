#include <iostream>
#include <cmath>
using namespace std;

double squareOrSquareRoot(int num) {
    if (num >= 0){
        return sqrt(num);
    
    }
    else{
        return num * num;
    }
    
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Result: " << squareOrSquareRoot(num) << endl;

    return 0;
}
