#include<iostream>
#include<fstream>

using namespace std;

struct Student {
    char name[50];
    int test_mark;
};

int main(){
    ifstream studentInfo("D:\\test.bin", ios::binary); // Open in binary mode

    if (!studentInfo) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    Student student;

    while (studentInfo.read((char*)&student, sizeof(Student))) {
        cout << "Name: " << student.name << ", Test Mark: " << student.test_mark << endl;
    }

    studentInfo.close(); // Close the file

    return 0;
}
