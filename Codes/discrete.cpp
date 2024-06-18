#include <iostream>

using namespace std;

int main() {
    int X[] = {1, 2, 3, 4, 5, 6};
    int Y[] = {1, 2, 3, 4, 5, 6, 7};
    int Z[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int count = 0;

    for (int i = 0; i < sizeof(X) / sizeof(X[0]); ++i) {
        for (int j = 0; j < sizeof(Y) / sizeof(Y[0]); ++j) {
            for (int k = 0; k < sizeof(Z) / sizeof(Z[0]); ++k) {
                if (X[i] + Y[j] + Z[k] == 18) {
                    cout<<X[i]<<","<<Y[i]<<","<<Z[i]<<endl;
                    count++;
                }
            }
        }
    }

    cout << "Number of combinations where x + y + z = 18: " << count;

    return 0;
}
