#include <iostream>
using namespace std;


template <typename T, typename U>


double floatingPointDivide(T a, U b) {
    return (double)a / b;
}



int main() {
    cout << "Floating point division: " << floatingPointDivide(5, 299) << endl;
    return 0;
}