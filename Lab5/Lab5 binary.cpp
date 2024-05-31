#include<iostream>
#include<fstream>

using namespace std;

ofstream studentInfo("D:\\test.bin", ios::binary); // Open in binary mode

struct Student {
    char name[50];
    int test_mark;
};

void getRecord(Student& student){
    cout<<"Enter the names: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    cin.getline(student.name, 50);

    cout<<"Enter the results ";
    cin>>student.test_mark;
}

int main(){
    int num;
    cout<<"Enter The # of Students ";
    cin>>num;

    Student student;

    for (int i = 0; i < num; i++)
    {
        getRecord(student);
        studentInfo.write((char*)&student, sizeof(Student)); // Write to binary file
    }
    
    studentInfo.close(); // Close the file

    return 0;
}