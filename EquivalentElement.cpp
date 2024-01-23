#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int first[3][3];
    int second[3][3];
    int resultant[3][3];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Enter number for fist [" << i + 1 << "][" << j + 1<< "] : ";
            cin >> first[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "Enter number for second [" << i + 1 << "][" << j + 1 << "] : ";
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            resultant[i][j] = first[i][j] + second[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << resultant[i][j] << "\t";
        }
        cout<<endl;
    }
}