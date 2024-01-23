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

    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
             if(i != j) {
                if (array[i] == array[j + 1]) {
                
                    count++;
                }
                if(sizeof(count) % 2 != 0) {
                    cout<<"Here are "<<array[i]<<endl;
                }
               
        }
    }
      

    }
    
    return 0;
}
