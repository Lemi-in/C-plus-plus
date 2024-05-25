#include <iostream>
using namespace std;

template <typename T>

void printArray(T arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"size of array: "<<size<<endl;

    float array2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int size2 = sizeof(array2)/sizeof(array2[0]);

    char array3[] = {'a', 'b', 'c', 'd', 'e'};
    int size3 = sizeof(array3)/sizeof(array3[0]);

    cout<<"Array 1: "<<endl;
    printArray(array, size);
    cout<<endl;

    cout<<"Array 2: "<<endl;
    printArray(array2, size2);
    cout<<endl;

    cout<<"Array 3: "<<endl;
    printArray(array3, size3);
    cout<<endl;
    

    return 0;

}


