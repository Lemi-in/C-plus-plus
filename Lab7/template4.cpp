#include <vector>
#include <iostream>


using namespace std;

template <typename T>

bool isPalindrome(const vector<T>& vec) {
    size_t left = 0;
    size_t right = vec.size() - 1;
    
    while (left < right) {
        if (vec[left] != vec[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    
    vector<int> vec1 = {1, 2, 3, 2, 1};
    vector<int> vec2 = {1, 2, 3, 4, 5};

    if (isPalindrome(vec1)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
     
    
    return 0;
}
