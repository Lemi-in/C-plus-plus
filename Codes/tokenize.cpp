// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string input;
//     string token = {""};
//     cout<<"Enter a text: ";
//     getline(cin,input);

//     for(char ch : input ){
//         if(ch ==  ' '){
            
//             cout<<"\n";
        
//         }
      
//     }
//     cout<<token;
// } 

// #include <iostream>
// using namespace std;
// // defining a struct
// struct student1 {
// int roll_no;
// char name[40];
// };
// // defining a union
// union student2 {
// int roll_no;
// char name[40];
// };


// int main()
// {
// struct student1 s1;
// union student2 u1;
// cout<<" size of structure : " ;
// cout << sizeof(s1) << endl;
// cout << "size of union : " ;
// cout<< sizeof(u1) << endl;
// return 0;
// }

#include <iostream> 
using namespace std; 
enum week { 
Monday, Tuesday, Wednesday, 
Thursday, Friday, Saturday, Sunday
}; 
int main() { 
week today; 
today = Wednesday; 
cout << "Day " << today+1; 
cout<<"\nSize: "<<sizeof(week);
return 0;
}