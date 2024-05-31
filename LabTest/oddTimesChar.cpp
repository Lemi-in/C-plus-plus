#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string name;
    cout << "What is Your name: ";
    cin >> name;
    cin.ignore(); // To ignore newline character after name input
    
    string text;
    cout << "Enter your text: ";
    getline(cin, text);
    
    unordered_map<char, int> freq;
    for(char ch : text) {
        if(ch != ' ') {
            freq[ch]++;
        }
    }
    

    vector<char> odd_occurrences;
    for(const auto &key : freq) {
        if(key.second % 2 != 0) {
            odd_occurrences.push_back(key.first);
        }
    }
    
    cout << "Hi " << name << ", the characters that occur odd number of times are ";
    for(char ch : odd_occurrences) {
        cout << ch << " ";
    }
    cout << "." << endl;
    
    return 0;
}
