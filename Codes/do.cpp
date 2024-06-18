#include <iostream>
#include <iomanip>
using namespace std;
/*  void pattern(int, char = '#');
void pattern(char, int);

int main() {
    int size = 6;
    cout << "Pattern 1: \n";
    pattern(size);
    cout << "\nPattern 2: "<<endl;
    pattern('a', size);
    cout << "\nPattern 3: \n";
    pattern(size, 'O');

    return 0;
}

void pattern(int L, char S) {
    for (int i = 0; i < L; ++i) {
        for (int j = L; j > i; j--) {
            cout << S << " ";
        }
        cout << endl;  
    }
}

void pattern(char S, int L) {
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j <= i; j++) {
            cout << char(S + j) << " ";
        }
        cout << endl;
    }
} */
/* string rep[4] = {"Cashier1,Cashier2" ,"Cashier3,Cashier4"};

int artCount [3][5] = {{20,51,30,17,44},{150,120,90,110,88},{24,76,22,40,120}};

int main() {
    for(int i=0; i< 3; ++i)
    {
    cout<<"\nRepresantatives: "<<rep[i];
    cout<<"\nNimber of items sold: ";
    for(int j=1; j<4;j++)

      cout<<setw(4)<<artCount[i][j];
      cout<<endl;

    }
    
}

 */


#include <cstring>

int main() {
    int i,j;
    j=5; i= j++ + j++ + j--;

    cout<<"i= "<<i<<endl;
    cout<<"j= "<<j;
    cout<<int(9.5/4);
    
}
