#include <iostream>
#include <string>

using namespace std;

int main() {
   string word;
   bool isPalindrome = true;

   cout<<"Enter a word: ";
   cin>>word;
   int length = word.length();
   for(int i=0; i<length / 2; ++i){
    
        if(word[i] != word[length-i -1]){
            isPalindrome = false;
            break;
        }
    }
   
   if(isPalindrome){
    cout<<"The word is Palindrome"<<endl;

   }else {
    cout<<"The word is not a Palindrome"<<endl;
   }


   
        }
        


 
