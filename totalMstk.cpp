
// Design a program that read total mark of a students’ and print the score level with the mark in tabular
// format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail
#include <iostream>

using namespace std;

int main()
{

    int score[5];

    for (int i = 0; i < 5; ++i)
    {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> score[i];
    }
    cout << "score"
         << "\t"
         << "level " << endl;

    for (int i = 0; i < 5; ++i)
    {
        string level;

        if (score[i] >= 80)
        {
            level = "Excellent";
        }
        else if (score[i] >= 60)
        {
            level = "Very Good";
        }
        else if (score[i] >= 50)
        {
            level = "fair";
        }
        else if (score[i] >= 40)
        {
            level = "poor";
        }
        else if (score[i] < 40)
        {
            level = "Fail";
        }
        cout << score[i] << "\t" << level << endl;
    }
}
