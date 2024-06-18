#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string name;

    cout<<"What is your name: ";
    getline(cin, name);

    cout<<"Enter a string: ";
    getline(cin, text);

    int count = 0;
    cout<<"Hi "<<name<<endl;
    cout<<"Here is the text after removing non alpha charachters"<<endl;

     while (true)
     {
        if(isalpha(text[count])  || text[count] == ' '){
            count++;
        }
        else{
            break;
        }
     }

     for(int i=0; i<count; ++i) {

       
            if (isalpha(text[i])  || text[i] == ' ')
            {
                cout<<text[i];
            }
            
        
        
     }

    
}