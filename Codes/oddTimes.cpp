#include <iostream>

using namespace std;

int main() {
  string name;
  int n, element, count;
  bool found = false;

  // Get user input
  cout << "What is Your name: ";
  cin >> name;

  cout << "How many elements: ";
  cin >> n;

  int arr[n];
  cout << "Array list: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Loop through each element
  for (int i = 0; i < n; i++) {
    element = arr[i];
    count = 0;

    // Count occurrences of the element
    for (int j = 0; j < n; j++) {
      if (arr[j] == element) {
        count++;
      }
    }

    // Check for odd occurrences
    if (count % 2 != 0) {
      found = true;
      cout << "Hi " << name << ", the element " << element << " occurs an odd number of times (" << count << ")" << endl;
      break; // No need to continue searching if found
    }
  }

  // Handle no odd occurrences
  if (!found) {
    cout << "Hi " << name << ", no element occurs an odd number of times." << endl;
  }

  return 0;
}
