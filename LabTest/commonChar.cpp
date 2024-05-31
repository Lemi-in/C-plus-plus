#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
    string name;
    cout << "What is Your name: ";
    cin >> name;
    
    string str1, str2, str3;
    cout << "String 1: ";
    cin >> str1;
    cout << "String 2: ";
    cin >> str2;
    cout << "String 3: ";
    cin >> str3;
    
    set<char> common_chars;
    unordered_map<char, int> freq1, freq2, freq3;
    for(char ch : str1) freq1[ch]++;
    for(char ch : str2) freq2[ch]++;
    for(char ch : str3) freq3[ch]++;
    
    for(char ch : str1) {
        if(freq2[ch] > 0 && freq3[ch] > 0) {
            common_chars.insert(ch);
        }
    }
    
    cout << "Hi " << name << ", the common characters are ";
    for(char ch : common_chars) {
        cout << ch << " ";
    }
    cout << "." << endl;
    
    return 0;
}
