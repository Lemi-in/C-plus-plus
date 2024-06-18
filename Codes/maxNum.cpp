#include <iostream>
using namespace std;

double maxy(double a, double b) {
    if (a > b){
        return a;
    }
    else{
        return b;
    }
   
}
double maxy(double a, double b, double c) {
    return maxy(maxy(a, b), c);
}

int main() {
    cout << "Max of 5.2 and 3.8: " << maxy(5.2, 3.8) << endl;
    cout << "Max of 5.2, 3.8, and 7.1: " << maxy(5.2, 3.8, 7.1) << endl;
    return 0;
}
