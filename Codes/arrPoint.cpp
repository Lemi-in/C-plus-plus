#include <iostream>
using namespace std;
int main (){
     /*int arr[5];


    cout<<"\nAddress of a[0]: "<<&arr[0];
    cout<<"\nArray Name as pointer: "<<arr;
    cout<<"\n\nAddress of a[1]: "<<&arr[1] <<"\t"<<(arr+1);
    cout<<"\nAddress of a[4]: "<<&arr[4]<<"\t"<<(arr+4);
    int *ptr = arr;
    cout<<"\n\nAddress of array: "<<ptr; 
    */
   

   /* int a[5] = {2,4,6,8,22};
    cout<< *(a + 2) << " " << a[0]<<endl;

    int *p = a;

    cout<<a[0]<<" " << *p;

*/


 /* float arr[5];
    // Insert data
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
    // insert value to arr[i]
        cin >> *(arr + i) ;
    }

    cout << "Displaying data:\n ";
    for (int i = 0; i < 5; ++i) {
    // display value of arr[i]
        cout << *(arr + i) << endl ;
    }*/
   


    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    p = balance;
    // output each array element's value 
    cout << "Array values using pointer \n";
    for ( int i = 0; i < 5; i++ ) {
        cout << "*(p + " << i << ") : "<< *(p + i) << endl;
    }
    return 0;


    
    }