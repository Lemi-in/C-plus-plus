#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int arr[8];

    for (int i = 0; i < 8; ++i)
    {
        cout << "Enter the numbers "
             << ": ";
        cin >> arr[i];
    }
    for (int i = 7; i >= 0; --i)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i];
            cout << endl;
        }
    }
}
