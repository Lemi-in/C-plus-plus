
#include <iostream>
#include <cmath>
using namespace std;


template <typename T, typename U>


double eucledianDistance(T arr1[],U arr2[]) {
    
    double d  = sqrt(pow((arr1[0] - arr2[0]), 2) + pow((arr1[1] - arr2[1]), 2));
    return d;
}




int main() {
    double point1[] = {2 ,3};
    int point2[] = {4, 5};
    cout << "Distance: " << eucledianDistance(point1, point2) << endl;
    

    return 0;
}
