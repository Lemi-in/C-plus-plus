#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector declaration and initialization
    vector<int> nums = {45, 85, 96, 23, 25};

    // Print the initial size and capacity of the vector
    cout << "Initial Size of Vector: " << nums.size() << endl;
    cout << "Capacity of Vector: " << nums.capacity() << endl;

    // Print vector elements using iterators
    cout << "\nOutput from begin and end: ";
    for (auto a = nums.begin(); a != nums.end(); ++a)
        cout << *a << " ";

    cout << "\nOutput from cbegin and cend: ";
    for (auto a = nums.cbegin(); a != nums.cend(); ++a)
        cout << *a << " ";

    // Remove element from the end of the vector
    nums.pop_back();
    cout << "\nSize of Vector after pop_back: " << nums.size() << endl;
    cout << "Vector contents after deletion: ";
    for (size_t i = 0; i < nums.size(); ++i)
        cout << nums[i] << " ";

    // Erase the entire vector elements
    nums.clear();
    cout << "\nSize after clear(): " << nums.size() << endl;

    // Check if the vector is empty or not
    if (!nums.empty()) 
        cout << "Vector is not empty"; 
    else
        cout << "Vector is empty";

    // Declaration of a new vector
    vector<int> items;

    // Print the size and capacity of the new vector before insertion
    cout << "\n\nSecond Vector:\n";
    cout << "Size of Vector: " << items.size() << endl;
    cout << "Capacity of Vector: " << items.capacity() << endl;

    // Pushing the values one-by-one into the vector using push_back()
    for (int i = 1; i <= 5; ++i)
        items.push_back(i);

    // Printing the output of vector ‘items’ using iterators rbegin() and rend()
    cout << "\nOutput of rbegin and rend Function: "; 
    for (auto ir = items.rbegin(); ir != items.rend(); ++ir) 
        cout << *ir << " ";

    // Insert value at specified positions of the vector
    items.insert(items.begin(), 7); 
    items.insert(items.begin() + 2, 9); 
    items.insert(items.end() - 1, 15); 

    // Printing the output of vector ‘items’ using iterators crbegin() and crend()
    cout << "\nOutput of crbegin and crend Function: "; 
    for (auto ir = items.cbegin(); ir != items.cend(); ++ir) 
        cout << *ir << " ";

    // Resizing the vector ‘items’ to size 4 
    items.resize(4); 

    // Print the size and capacity of the vector after resizing
    cout << "\nSize of Vector after resizing: " << items.size() << endl;
    cout << "Capacity of Vector after resizing: " << items.capacity() << endl;

    // Print the vector contents after resizing
    cout << "\nOutput after resizing: "; 
    for (auto ir = items.cbegin(); ir != items.cend(); ++ir) 
        cout << *ir << " ";

    return 0;
}
