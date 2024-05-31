#include <iostream>
#include <vector>
#include <unordered_map>
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
    
    unordered_map<int, int> freq;
    for(int num : arr) {
        freq[num]++;
    }
    
    int first_frequent = -1, first_non_frequent = -1;
    for(int num : arr) {
        if(freq[num] > 1) {
            first_frequent = num;
            break;
        }
    }
    
    for(int num : arr) {
        if(freq[num] == 1) {
            first_non_frequent = num;
            break;
        }
    }
    
    cout << "Hi " << name << ", the first frequent element is " << first_frequent
         << " and the first non-frequent element is " << first_non_frequent << "." << endl;
    
    return 0;
}
