#include <iostream>

using namespace std;

int main()
{
    string name;
    int size;

    cout << "What is your name? -";
    getline(cin, name);

    cout << "How many elements? -";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << " :";
        cin >> arr[i];
    }

    bool isfrequent = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    isfrequent = true;
                }
               
            }
        }
         if (isfrequent)
                {
                    cout << "Hi " << name << ", the first frequent element is " << arr[i] << endl;
                    break;
                }
    }
        bool isnonfrequent = false;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i != j)
                {
                    if (arr[i] != arr[j])
                    {
                        isnonfrequent = true;
                    }
                }
            }
             if(isnonfrequent){
                    cout<<"Hi "<<name<<", the first non frequent element is "<<arr[i]<<endl;
                    break;
        }
    }
}