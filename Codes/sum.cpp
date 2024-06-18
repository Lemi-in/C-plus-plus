#include <iostream>

using namespace std;

int main() { 
    int sum =0;

   
    int array[5] = {7,4,8,5,8};

    for (int i = 0; i < 5; ++i) {
        sum += array[i];
    }
    cout<<"The sum of the elemenets in the array is "<<sum;
    
    cout << endl;

    return 0;
}
