#include <iostream>

using namespace std;

int main()
{
    string name;
    int size;

    cout << "What is your name? - ";
    getline(cin, name);

    cout << "How many elements? - ";
    cin >> size;

    int array1[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers for the array " << i + 1 << " : ";
        cin >> array1[i];
    }

    cout << "Hello " << name << ". The elements that appear odd times are: ";

    for (int i = 0; i < size; ++i)
    {
        bool isOddTimes = false;
        int count = -1 ;

        for (int j = 0; j < size; ++j)
        {
            if (i != j && array1[i] == array1[j])
            {
                count++;
            }
        }

        if (count % 2 != 0)
        {
            isOddTimes = true;
        }

        if (isOddTimes)
        {
            cout << array1[i] << " ";
        }
    }

    return 0;
}
