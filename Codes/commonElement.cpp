

#include <iostream>

using namespace std;

int main()
{
    string name;
    int size;

    cout << "What is your name? - ";
    getline(cin, name);

    cout << "How many elements? - ";
    cin >> size;

    int array1[size];
    int array2[size];
    int array3[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers for the first array: ";
        cin >> array1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers for the second array: ";
        cin >> array2[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers for the third array: ";
        cin >> array3[i];
    }

    cout << "Hello " << name << ". The common elements in the three arrays are: ";

    
    for(int i=0; i<size; ++i){
        
        bool iscommonwith2 = false;
        bool iscommonwith3 = false;

        for(int j=0; j<size; ++j) {

            if(array1[i] == array2[j] ) {
                iscommonwith2 = true;

            }

        }
        for(int k=0; k<size; ++k){
            if(array1[i] == array2[k]) { 
                iscommonwith3 = true;
        }
        }

        if(iscommonwith2 && iscommonwith3) {
            cout<<array1[i];
            cout<<" ";
        }
        

    }

    return 0;
}
