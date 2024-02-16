#include <iostream>

using namespace std;

int main()
{
    //char s = 'a';

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < i; j++) {
            cout << char('a' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
