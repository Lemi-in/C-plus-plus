#include <iostream>
#include <cstring>

using namespace std;

int main() {
   string words;
   int vowels = 0;
   int consonants =0;

   cout<<"Enter any word: ";
   getline(cin, words);

   for(char ch : words) {
    if(isalpha(ch)) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        ++vowels;
       }
    else{
        ++consonants;
    }
    }
   }
   cout<<"The number of vowels are:: "<<vowels<<endl;
   cout<<"The number of consonants are:: "<<consonants<<endl;
        
}

 
