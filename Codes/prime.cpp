#include <iostream>
using namespace std;


struct Sample { int x; };
int main() {
    cout << "Prime numbers between 25 and 50 are: ";
    Sample s;
    s.x = 50;
    int i, j;
    int c = 0;
    for (i = 25; i <= s.x; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                c++;
        }
        if (c == 2)
            cout << i << ", ";
        c = 0;
    }
}
