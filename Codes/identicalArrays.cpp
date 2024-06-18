#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {3, 5, 1, 4, 2};
    bool identical = true;

    for (int i = 0; i < 5; ++i)
    {
        if (array1[i] != array2[i])
        {
            identical = false;
        }
    }
    if (identical)
    {
        cout << "The arrays are Identical";
    }
    else
    {
        cout << "The arrays are not identical";
    }
}
