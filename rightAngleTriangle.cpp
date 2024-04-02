#include <iostream>

using namespace std;

void printTriangle(char symbol = '*', int height = 5) {
  cout << "Right angle triangle pattern:\n";
  for (int i = 1; i <= height; ++i) {
    for (int j = 1; j <= i; ++j) {
      cout << symbol << " ";
    }
    cout << endl;
  }
}

int main() {
  int choice, height;
  

  cout << "1 - Default, 2 - Custom\n";
  cin >> choice;

  if (choice == 1) {
    printTriangle();
  } else if (choice == 2) {
    cout << "Enter the desired height of the triangle: ";
    cin >> height;
    printTriangle('*', height); 
  } else {
    cout << "Invalid choice. Using default height.\n";
    printTriangle();
  }

  return 0;
}
