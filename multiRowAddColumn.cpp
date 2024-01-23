#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int array[3][3];
    int multi = 1;
    int sum = 0;
    

    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cout<<"Enter a number for ["<<i<<"]["<<j<<"]";
            cin>>array[i][j];
        }
    }
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
           multi *= array[i][j];
        }
    }
    cout<< "The multiplication of the elements of rows is: " <<multi<<endl;

    for(int j=0; j<3; ++j){
        for(int i=0; i<3; ++i){
           sum += array[i][j];
        }
    }
    cout<<"The sum of the elements of columns is: "<<sum<<endl;
   
    }

   

