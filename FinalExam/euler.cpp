#include <iostream>
using namespace std;

// Function to calculate factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Function to compute an approximation of e using factorials
double computeE(int num_terms) {
    double e_approx = 0.0;
    for (int n = 0; n < num_terms; ++n) {
        e_approx += 1.0 / factorial(n);
    }
    return e_approx;
}

int main() {
    int num_terms;
    cout << "Enter the number of terms to use in the approximation of e: ";
    cin >> num_terms;
    
    double e_approximation = computeE(num_terms);
    
    cout.precision(15);  // Set precision for cout to show more digits
    cout << "Approximation of e using " << num_terms << " terms: " << e_approximation << endl;
    
    return 0;

}