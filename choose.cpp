#include <iostream>
#include <cstring>

using namespace std;

int main() {
   string choice = "BACADAADC";
   char  userChoice[10];
   int testScore = 0;
   char stAnser[10] = {};

    for(int i=0; i<10; ++i) {
        cout<<"Enter the answer for question number "<<i+1<< ": ";
        cin>>userChoice[i];
        stAnser[i] = toupper(userChoice[i]);
    }


   if(toupper(userChoice[0]) == choice[0]) {
    testScore ++;
   }
   if(toupper(userChoice[1]) == choice[1]) {
    testScore ++;
   }
   if(toupper(userChoice[2]) == choice[2]) {
    testScore ++;
   }
   if(toupper(userChoice[3]) == choice[3]) {
    testScore ++;
   }
   if(toupper(userChoice[4]) == choice[4]) {
    testScore ++;
   }
   if(toupper(userChoice[5]) == choice[5]) {
    testScore ++;
   }
   if(toupper(userChoice[6]) == choice[6]) {
    testScore ++;
   }
   if(toupper(userChoice[7]) == choice[7]) {
    testScore ++;
   }
   if(toupper(userChoice[8]) == choice[8]) {
    testScore ++;
   }
   if(toupper(userChoice[9]) == choice[9]) {
    testScore ++;
   }
  
  
  cout<<"Your test score is "<<testScore<<" out of 10"<<endl;
  cout<<"Your answers are ";
  for(int j=0; j<10; ++j){
    cout<<stAnser[j];
  }
  cout<<"\n";
  cout<<"The correct answers are: "<<choice;

  
  
        
}

 
