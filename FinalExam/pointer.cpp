#include <iostream>
using namespace std;


// void main() {
//     char *p1 = "programming";
//     cout<< p1 << endl;

//     p1 = p1 + 4;
//     cout << p1 << endl;

//     p1 = p1 + 2;
//     cout << p1 << endl;

//     p1 = p1 - 3;
//     cout << p1 << endl;

//     cout << p1++ << endl;
// }

void num(int &, int);

int x = 10;

int main() {
    int x = 20, y = 30;
    cout << x << endl;
    cout << "The answer is:\n";
    num(x, y);
    cout << x << endl;
    cout << y << endl;
}

void num(int &a, int b) {
    a++;
    ++b;
}
