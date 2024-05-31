#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string name;
    cout << "What is Your name: ";
    cin >> name;
    cin.ignore(); // To ignore newline character after name input
    
    string text;
    cout << "What is Your text: ";
    getline(cin, text);
    
    unordered_map<char, int> freq;
    for(char ch : text) {
        if(ch != ' ') {
            freq[ch]++;
        }
    }
    
    char first_frequent = '\0', first_non_frequent = '\0';
    for(char ch : text) {
        if(ch != ' ') {
            if(freq[ch] > 1 && first_frequent == '\0') {
                first_frequent = ch;
            }
            if(freq[ch] == 1 && first_non_frequent == '\0') {
                first_non_frequent = ch;
            }
        }
    }
    
    cout << "Hi " << name << ", the first frequent character is " << first_frequent 
         << " and the first non-frequent character is " << first_non_frequent << "." << endl;
    
    return 0;
}
