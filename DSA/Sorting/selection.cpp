#include <iostream>
using namespace std;

void selection_sort(int list[], int n){ 
    int i,j, smallest; 
    for(i = 0; i<n;i++){ 
        smallest=i; 
        for(j=i+1;j<n;j++){
            if(list[j]<list[smallest]) 
            smallest=j; 
            }
        int temp = list[smallest]; 
        list[smallest]=list[i]; 
        list[i] = temp; 
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
    selection_sort(list, n);
    cout << endl;

    return 0;
}
