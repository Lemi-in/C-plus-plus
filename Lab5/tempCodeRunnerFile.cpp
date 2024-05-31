#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

int main() {

    ifstream file("Sheet5Ex5.cpp");
    char ch;
    unordered_map<char, int> count; 

    if (!file) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    while (file.get(ch)) {
        if (ch >= 'a' && ch <= 'z') {
            count[ch]++;
        }
    }

    file.close();
    cout << "CHARACTER\tOCCURRENCES" << endl;

    for (char c = 'a'; c <= 'z'; ++c) {
        cout << c << "\t\t" << count[c] << endl;
    }

    return 0;
}
