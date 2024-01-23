#include <iostream>
using namespace std;

int main() {
     string name, array;

     cout<<"What is your name:- ";
     getline(cin, name);

     cout<<"The text: ";
     getline(cin, array);
     

     int count =0;
    cout<< "Hey "<<name <<" The element that is repeated an odd amount of time is ";
     while (true)
     {
        if(isalpha(array[count])  || array[count] == ' '){
            count++;
        }
        else{
            break;
        }
     }
     

     for(int i=0; i<count; ++i){

        bool isOddChar = false;
        int oddCount = -1;

        for(int j=0; j<count; ++j) {

           if(i != j && tolower(array[i] == array[j])) {
              oddCount++;
           }

        }
        if(oddCount % 2 != 0){
             isOddChar = true;
            
             cout<<array[i];
             break;
        }

        if(isOddChar) {
           //cout<<array[i]<<" ";
        }
     }
     

}