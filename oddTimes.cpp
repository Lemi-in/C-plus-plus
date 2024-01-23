#include<iostream>

using namespace std;

int main() {
    string name;
    int size;

    cout << "What is your name? -";
    getline(cin, name);

    cout << "How many elements? -";
    cin >> size;

    int array[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << " :";
        cin >> array[i];
    }
    
    int count;
    
    
    for (int i : array) {
        count = 0;

        for (int j : array) {
            if (i == j) {
                count++;
            }
        }

        if (count % 2 != 0 ) {
            cout << "The element/s appearing an odd number of times is/are " << i << endl;
        
            
        }
    }

    return 0;
}
