#include<iostream>
#include<fstream>
using namespace std;


ifstream readTest("D:\\test.txt");

void display(){
    char c;
    while (readTest.get(c))
    {
       cout<<c;
    }
}
int main(){
   cout<<"The Data "<<endl;
   display();
    
}