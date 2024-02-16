#include <iostream>

using namespace std;

int main() {
    int term;

    cout<<"How many terms: ";
    cin>>term;

    cout<<"The fibonacci series up to "<<term<<" are:"<<endl;
    int first = 0, second = 1;

    for(int i=0; i<term; ++i) {
        int nextTerm;

        nextTerm = first + second;
        first = second;
        second = nextTerm;

        cout<<first<< " ";
    }

  
    return 0;
}
