#include <iostream>
using namespace std;

int fib(int n) {
  if (n <= 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n;
  cout << "Enter the number of terms: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << fib(i) << " "; 
  }

  // get the nth term
  cout << "\n" <<"The "<<n<<"th term is " <<fib(n - 1) << endl;


  return 0;
}
