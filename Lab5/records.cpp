#include <iostream>
#include <fstream>

using namespace std;


void readIntegersFromFile(const char* filename, int* array, int* count) {
    ifstream file(filename);
    int num;
    *count = 0;

    if (!file) {
        cout<< "Error opening file." << endl;
        return;
    }

    while (file >> num) {
        array[*count] = num;
        (*count)++;
    }

    file.close();
}

int main() {
    const char* filename = "records.txt";
    int array[100]; 
    int count;

   
    readIntegersFromFile(filename, array, &count);

    cout << "Number of entries: " << count << endl;
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

