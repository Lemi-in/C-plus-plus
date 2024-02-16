#include <iostream>
using namespace std;

    int main(){
    int arr[3][4] = { { 10, 11, 12, 13 },
    { 20, 21, 22, 23 },
    { 30, 31, 32, 33 }};
    
    int *ptr = arr[0]; //*(arr+1)
    cout<<"\nAddress and value of the "<<endl;

    for (int i = 0; i < 12; i++) {
        cout<<i+1<<" element: ";
        cout<<"\t"<<ptr+i<<"\t"<<*(ptr+i)<<endl;
    }
return 0; }