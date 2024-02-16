#include <iostream>

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

    
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (array[j] > array[j + 1]) {
        
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order: " << endl;
    for (int k = 0; k < size; k++) {
        cout << array[k] << " ";
    }
    cout << endl;

    return 0;
}
