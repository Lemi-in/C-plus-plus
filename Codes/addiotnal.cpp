
#include <iostream>
#include <iomanip>
using namespace std;

void pattern(int);

int main() {
    int size = 6;
    cout << "Pattern 4: \n";
    pattern(size);

    return 0;
}

void pattern(int L) {
    for (int i = 0; i < L; ++i) {
        // Print spaces
        for (int j = 0; j < L - i; ++j) {
            cout << "  ";
        }
        // Print stars
        for (int k = 0; k < 2 * i - 1 ; ++k) {
            cout << "* ";
        }
        cout << endl;
    }
}

