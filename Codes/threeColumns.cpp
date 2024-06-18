// There are two ways of solving this problem. The first one is



#include <iostream>
#include <cstring>

using namespace std;

int main() {
    float volts[3][3] = 
        {
            {11.95, 16.32, 12.15},
            {8.22, 15.98, 26.22},
            {13.54, 6.45, 17.59},

        };

        for(int i=0; i<3; ++i){
            for(int j=0; j<3; ++j) {
                cout<<volts[i][j]<<"\t";
            }
            cout<<endl;
        }
    
        }

// The second one is 

/*#include <iostream>

using namespace std;

int main() {
    double volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

  
    for (int i = 0; i < 9; ++i) {
        cout << volts[i] << "\t";
        if ((i + 1) % 3 == 0) {
            cout << endl;
        }
    }

    return 0;
}
*/


 
