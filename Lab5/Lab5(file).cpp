#include<iostream>
#include<fstream>

using namespace std;

ofstream studentInfo("D:\\test.txt");
void getRecord(){
    int test_mark;
    string name;
    cout<<"Enter the names: ";
    cin>>name;
    studentInfo<<name;

    cout<<"Enter the results ";
    cin>>test_mark;
    studentInfo<<' '<<test_mark<<endl;
}
int main(){
    int num;
    cout<<"Enter The # of Students ";
    cin>>num;

    for (int i = 0; i < num; i++)
    {
       getRecord();
    }
    

}
    