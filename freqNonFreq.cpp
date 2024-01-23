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

    int arr[size];

    
    cout << "Enter " << size << " elements separated by space: ";
    for (int i = 0; i < size; ++i)
    { 
        cout<<"Enter element "<< i + 1<<" : ";
        cin >> arr[i];
    }

    int firstFrequent = -1;
    int firstNonFrequent = -1;

    for (int i = 0; i < size; ++i)
    {
        int count = 1; 

        for (int j = 0; j < size; ++j)
        {
            if (i != j && arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1 && firstFrequent == -1)
        {
            firstFrequent = arr[i];
        }
        else if (count == 1 && firstNonFrequent == -1)
        {
            firstNonFrequent = arr[i];
        }

        if (firstFrequent != -1 && firstNonFrequent != -1)
        {
            break; 
        }
    }

    
    cout << "Hi " << name << ", the first frequent element is " << firstFrequent << endl;

    if (firstNonFrequent != -1)
    {
        cout << "Hi " << name << ", the first non-frequent element is " << firstNonFrequent << endl;
    }
    else
    {
        cout << "Hi " << name << ", there are no non-frequent elements in the array." << endl;
    }

    return 0;
}
