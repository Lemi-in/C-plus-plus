#include <iostream>

using namespace std;

int main() {
    int term;

    cout << "How many terms: ";
    cin >> term;

    cout << "The Fibonacci series up to " << term << " terms are:" << endl;
    int first = 0, second = 1;

    for (int i = 0; i < term; ++i) {
        cout << first << " ";
        int nextTerm = first + second;
        first = second;
        second = nextTerm;
    }

    // get the nth term
    cout << "\n" << "The " << term << "th term is " << first << endl;

    return 0;
}
