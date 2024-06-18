#include <iostream>
using namespace std;

struct AASTU {
    struct Informatics {
        char cs[20];
        char SE[21];
    } dept;
};

int main() {
    AASTU aastu = {{"Computer Science", "Software Engineering"}};
    
    cout << "Initialized cs: " << aastu.dept.cs << endl;
    cout << "Initialized SE: " << aastu.dept.SE << endl;
    return 0;
}
