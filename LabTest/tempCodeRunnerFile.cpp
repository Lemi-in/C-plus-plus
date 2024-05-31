#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string name;
    cout << "What is Your name: ";
    cin >> name;
    
    int n;
    cout << "How many elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Array list: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    cout << "Hi " << name << ", the sorted array elements are: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << "." << endl;
    
    
    return 0;
}
