#include<iostream>

using namespace std;

int main(){
    string name;
    int size1,size2,size3;
    

    cout<<"What is your name? -";
    getline(cin,name);
   
    cout<<"How many elements for array 1? -";
    cin>>size1;
    int array1[size1] ={};

    
    cout<<"How many elements for array 2? -";
    cin>>size2;
    int array2[size2] ={};

    
    cout<<"How many elements for array 3? -";
    cin>>size3;
    int array3[size3] ={};

    for(int i=0; i<size1; ++i){
        cout<<"Enter elements for array one: ";
        cin>>array1[i];
        
    }
    for(int i=0; i<size2; ++i){
        cout<<"Enter elements for array two: ";
        cin>>array2[i];

    }
    for(int i=0; i<size3; ++i){
        cout<<"Enter elements for array three: ";
        cin>>array3[i];

    }

    for(int i:array1) {
        for(int j:array2) {
            for(int k:array3) {
               if(i == j && i == k) {
                cout<<"The common elements are "<<i<<endl;
               }
            }
        }
    }

    


  

}