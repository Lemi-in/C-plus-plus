#include <iostream>
#include <cmath>
using namespace std;

void findThirdSide(double side1, double side2, double &thirdSide) {
    thirdSide = sqrt(side1 * side1 + side2 * side2);
}

int main() {
    double side1, side2, thirdSide;
    cout << "Enter the lengths of two sides of the right angle triangle: ";
    cin >> side1 >> side2;

    findThirdSide(side1, side2, thirdSide);
    cout << "Length of the third side: " << thirdSide << endl;

    return 0;
}
