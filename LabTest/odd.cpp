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
    
    vector<int> odd_occurrences;
    for(const auto&entry : freq) {
        if(entry.second % 2 != 0) {
            odd_occurrences.push_back(entry.first);
        }
    }
    
    cout << "Hi " << name << ", the elements that occur odd number of times are ";
    for(int num : odd_occurrences) {
        cout << num << " ";
    }
    cout << "." << endl;
    
    return 0;
}
