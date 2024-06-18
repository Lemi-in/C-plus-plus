#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int arr[8];
    int total = 0;
    float average =0;

    for(int i=0; i<8; ++i){
        cout<<"Enter the number "<< i + 1<<": ";
        cin>>arr[i];

        total += arr[i];

    }
        average = total / 8;
        cout<<"The total is: "<< total<<endl;
        cout<<"The average is: "<< average<<endl;


   
        }
        


 
