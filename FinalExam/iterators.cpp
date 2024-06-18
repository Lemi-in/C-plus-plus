#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Iterate through the vector using an iterator
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Modify the elements using an iterator
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        *it *= 2;
    }

    // Iterate through the modified vector
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
