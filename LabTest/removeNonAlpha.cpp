#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "What is Your name: ";
    cin >> name;
    cin.ignore(); // To ignore newline character after name input
    
    string text;
    cout << "Enter your text: ";
    getline(cin, text);
    
    string result;
    for(char ch : text) {
        if(isalpha(ch)) {
            result += ch;
        } else if(ch == ' ') {
            result += ch;
        }
    }
    
    cout << "Hi " << name << ", the alphabet characters are " << result << "." << endl;
    
    return 0;
}
