#include <iostream>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};
struct Student {
    int rollno;
    char name[20];
    int marks[5];
    Date BoD;
};
float Average(const Student &student) {
    float total = 0;
    for (int i = 0; i < 5; ++i) {
        total += student.marks[i];
    }
    return total / 5;
}
int main() {
    Student students[2];
   
    for (int i = 0; i < 2; ++i) {
        cout << "details" << i + 1 << ":\n";
        cout << "roll Number ";
        cin >> students[i].rollno;
        cout << "Name ";
        cin >> students[i].name;
        cout << "Date(DD/MM/YYYY) ";
        cin >> students[i].BoD.day >> students[i].BoD.month >> students[i].BoD.year;
        cout << "Enter Marks: ";
        for (int j = 0; j < 5; ++j) {
            cin >> students[i].marks[j];
        }
    }
    cout << "\n\nStudents Details:\n";
    cout << "Roll No\tName\tDate of Birth\tAverage Score\n";
    for (int i = 0; i < 2; ++i) {
        float average = Average(students[i]);
        cout << students[i].rollno << "\t" << students[i].name << "\t" 
             << students[i].BoD.day << "/" << students[i].BoD.month << "/" << students[i].BoD.year << "\t"
             << average << endl;
    }
    cout << "\n\nStudents with average score below 50:\n";
    cout << "Roll No\tName\tDate of Birth\tAverage Score\n";
    for (int i = 0; i < 2; ++i) {
        float average = Average(students[i]);
        if (average < 50) {
            cout << students[i].rollno << "\t" << students[i].name << "\t" 
                 << students[i].BoD.day << "/" << students[i].BoD.month << "/" << students[i].BoD.year << "\t"
                 << average << endl;
        }
    }

    return 0;
}
