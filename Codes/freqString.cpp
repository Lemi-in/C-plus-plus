#include <iostream>

using namespace std;

int main()
{
    string name;
    string text;

    cout << "What is your name? - ";
    getline(cin, name);

    cout << "Enter a text: ";
    getline(cin, text);

    char firstFrequent = '\0';
    char firstNonFrequent = '\0';

    for (int i = 0; i < text.length(); ++i)
    {
        int count = 1;

        for (int j = 0; j < text.length(); ++j)
        {
            if (i != j && text[i] == text[j])
            {
                count++;
            }
        }

        if (count > 1 && firstFrequent == '\0')
        {
            firstFrequent = text[i];
        }
        else if (count == 1 && firstNonFrequent == '\0')
        {
            firstNonFrequent = text[i];
        }

        if (firstFrequent != '\0' && firstNonFrequent != '\0')
        {
            break;
        }
    }

    cout << "Hi " << name << ", the first frequent character is " << firstFrequent << endl;

    if (firstNonFrequent != '\0')
    {
        cout << "Hi " << name << ", the first non-frequent character is " << firstNonFrequent << endl;
    }
    else
    {
        cout << "Hi " << name << ", there are no non-frequent characters in the text." << endl;
    }

    return 0;
}
