
#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;


int main() {

    cout<<"Enter the number of elements in array 1: ";
    int n1;
    cin>>n1;

    vector<int> arr1(n1);
    cout<<"Enter the elements of array 1: ";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the number of elements in array 2: ";
    int n2;
    cin>>n2;
    
    vector<int> arr2(n2);
    cout<<"Enter the elements of array 2: ";
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    cout<<"Enter the number of elements in array 3: ";
    int n3;
    cin>>n3;
    
    vector<int> arr3(n3);
    cout<<"Enter the elements of array 3: ";
    for(int i=0; i<n3; i++){
        cin>>arr3[i];
    }

    set<int> common;
    unordered_map<int, int> freq1, freq2, freq3;

    for (int i : arr1) freq1[i] ++;
    for (int i : arr2) freq2[i] ++;
    for (int i : arr3) freq3[i] ++;


    for(int i : arr1) {
        if (freq2[i] > 0 && freq3[i] > 0) {
            common.insert(i);

        }
    }
    for(int i : common){
        cout<<"The common element/s is/are "<< i << " ";
    }
}
    