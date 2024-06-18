
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

void count(string s, char c){
    unordered_map<char , int> freq;

    for(char i : s ) freq[i]++;

    for(char i : s ){
        if (i == c){
            cout<<"Character " <<c<< " apprears "<< freq[c] <<" times in the text";
            break;
        }
    }

}


int main() {
    string text;
    char l;
    cout<< "Enter a text: ";
    getline(cin, text);
    cout<< "Enter the character ";
    cin>>l;

    count(text, l);
   
}