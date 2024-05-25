#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    char name[50];
    int test_mark;
};

void getRecord(ofstream &studentInfo) {
    Student student;
    cout << "Enter the name: ";
    cin.ignore();
    cin.getline(student.name, 50);

    cout << "Enter the result: ";
    cin >> student.test_mark;

    studentInfo.write(reinterpret_cast<char*>(&student), sizeof(Student));
}

int main() {
    const char* filename = "D:\\students.bin";
    ofstream studentInfo(filename, ios::binary);

    if (!studentInfo) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        getRecord(studentInfo);
    }

    studentInfo.close();
    return 0;
}


