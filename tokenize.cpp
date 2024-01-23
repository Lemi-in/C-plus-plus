#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string token = {""};
    cout<<"Enter a text: ";
    getline(cin,input);

    for(char ch : input ){
        if(ch ==  ' '){
            
            cout<<"\n";
        
        }
      
    }
    cout<<token;
} 