

#include <iostream>

using namespace std;

int main()
{
    string name;
    

    cout << "What is your name? - ";
    getline(cin, name);

    

    string array1;
    string array2;
    string array3;

   
        cout << "Enter word for the first array: ";
        cin >> array1;
        int count1 = 0;
        while(true){
            if(isalpha(array1[count1])){
                count1++;
            }else{
                break;
            }
        }
    
    
    
        cout << "Enter word for the second array: ";
        cin >> array2;

         int count2 = 0;
        while(true){
            if(isalpha(array2[count2])){
                count2++;
            }else{
                break;
            }
        }
   
        cout << "Enter word for the third array: ";
        cin >> array3;
    

         cout << "Hello " << name << ". The common elements in the three arrays are: ";

    
    for(int i=0; i<count1; ++i){
        
        bool iscommonwith2 = false;
        bool iscommonwith3 = false;

        for(int j=0; j<20; ++j) {

            if(tolower(array1[i]) == tolower(array2[j]) ) {
                iscommonwith2 = true;

            }

        }
        for(int k=0; k< count2; ++k){
            if(tolower(array1[i]) == tolower(array3[k])) { 
                iscommonwith3 = true;
        }
        }

        if(iscommonwith2 && iscommonwith3) {
            cout<<array1[i];
            cout<<" ";
        }




    }

    return 0;
}
