#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "Enter your name: ";
    getline(cin, input);

    for (char ch : input)
    {

        ch = toupper(ch);
        cout << ch;
    }
    cout << "\n";
    for (char ch : input)
    {

        ch = tolower(ch);
        cout << ch;
    }
}