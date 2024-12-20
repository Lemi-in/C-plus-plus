#include <iostream>
using namespace std;

void insertion_sort(int list[]) {
    int n = sizeof(list) / sizeof(list[0]);
    int temp;
    for (int i = 1; i < n; i++) {
        temp = list[i];
        for (int j = i; j > 0 && temp < list[j - 1]; j--) {
            list[j] = list[j - 1];
            list[j - 1] = temp;
        } 
    } 
} 

int main() {
   int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int list[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>list[i];
    }
    insertion_sort(list);
    cout << endl;

    return 0;
}
