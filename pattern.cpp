#include <iostream>
using namespace std;
char pattern(int n=5){
 for(int i=0;n<n;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
        cout<<endl;
    }
}
}
void Fibonacci (int n){

int first=0,second=1;

cout<<"The Fibonacci Series up to "<<n<<"terms: "<<endl;
cout<<first<<" "<<second<<" ";

for(int i=0; i<n; ++i){

    int next=first + second;
    cout<<next<<" ";
    first=second;
    second=next;

}
}
void deffibonacci (int n=5){

int first=0,second=1;

cout<<"The Fibonacci Series up to "<<n<<"terms: "<<endl;
cout<<first<<" "<<second<<" ";

for(int i=0; i<n-2; ++i){

    int next=first + second;
    cout<<next<<" ";
    first=second;
    second=next;


}
}

int main(){
    int choice;

    int n;
    cout << "1. Print the default " << endl;
    cout << "2. your own " << endl;
    cin >> choice;

    switch (choice) {
    case 1:
       deffibonacci();
        break;
    case 2:

int terms;

cout<<"enter the number of terms: ";
cin>>terms;

Fibonacci(terms-2);
break;

    default:
        cout << "Invalid input" << endl;
        
        break;
    }

  pattern();


    return 0;
}
