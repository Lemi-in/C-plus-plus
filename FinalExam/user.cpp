
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class User{
    public:
        string name;
        int id;
        char sex;
        float salary;

    void read () {
        cout<<"Name: ";
        cin>>name;
        cout<<"Id: ";
        cin>>id;
        cout<<"SEX(M/F): ";
        cin>>sex;
        cout<<"Salary: ";
        cin>>salary;
    }

    void display(){
         cout << "Name: " << name << ", ID: " << id << ", Sex: " << sex << ", Salary: " << salary << endl;
    }
    

};

int main() {
    int n;
    cout<<"Enter the number of users :";
    cin>>n;
    User user[n];

    ofstream outFile("user.txt");

    for(int i= 0; i < n; ++i) {
        cout<<"Enter Information for user "<< i + 1 <<endl;
        user[i].read();
        outFile<<user[i].name << " " << user[i].id << " " << user[i].sex << " " << user[i].salary <<endl;
    }
    outFile.close();

    ifstream inFile("user.txt");
    User temp;
    while(inFile>> temp.name>> temp.id>>temp.sex>>temp.salary)
    {
        temp.display();
    }
    inFile.close();

    return 0;
}