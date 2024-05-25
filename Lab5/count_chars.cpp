#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ifstream file("Sheet5Ex5.cpp");
    char ch;
    int count[26] = {0}; 

    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    while (file.get(ch)) {
        if (ch >= 'a' && ch <= 'z') {
            count[ch - 'a']++; 
        }
    }

    file.close();
    cout << "CHARACTER\tOCCURRENCES" << endl;

    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << "\t\t" << count[i] << endl;
    }

    return 0;
}
