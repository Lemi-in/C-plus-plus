#include <iostream>

using namespace std;

int main() {
    int term;

    cout<<"How many elements? ";
    cin>>term;

    int array[term];

    
    for(int i=0; i<term; ++i) {
        cout<<"Entere the numbers ";
        cin>>array[i];
    }

    int  largest = array[0];;


    for(int i=0; i<term; ++i) {
        
        if(array[i] > largest) {
            largest = array[i];

        }
    }
    cout<<"The largest is "<<largest;

  
    return 0;
}
