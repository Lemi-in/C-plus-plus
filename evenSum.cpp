#include <iostream>

using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int array[rows][cols];
    int evenSum = 0;


    cout << "Enter elements of the 3x4 array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
            if (array[i][j] % 2 == 0) {
                evenSum += array[i][j];
            }
        }
    }


    cout << "Even array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] % 2 == 0) {
                cout << array[i][j] << "\t";
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }


    cout << "Sum of even elements: " << evenSum << endl;

    return 0;
}
