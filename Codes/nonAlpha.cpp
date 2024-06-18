#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    cout<<"Enter a string: ";
    cin>>input;

    for(char ch : input ){
        if(isalpha(ch)){
            cout<<ch;
        }
    }
}