#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const char realPass[12] = "lilyalderin";
    char userPass[12];

    cout<<"Enter a password: ";
    cin>>userPass;

    if(strcmp(realPass,userPass) == 0 ){
        cout<<"Welcome ";

    }
    else {
        cout<<"Incorrect password. Try again later. ";
    }
   
        }
        


 
