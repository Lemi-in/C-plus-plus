#include <iostream>
using namespace std;

int factorial  (int n) {

    if (n == 0){
        return 1;
    }
    else{

    return n * factorial (n - 1);

    }
}

int main() {

    int a ;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<factorial (a);
    
    return 0;
}

 