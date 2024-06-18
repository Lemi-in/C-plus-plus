// #include <iostream>
// using namespace std;
// enum week {
// Monday, Tuesday, Wednesday,
// Thursday, Friday, Saturday, Sunday
// };
// int main() {
// week today;
// today = Wednesday;
// cout << "Day " << today+1;
// cout<<"\nSize: "<<sizeof(week);
// return 0;
// }

#include <iostream>
using namespace std;
enum colors
{
    green = 1,
    red,
    blue,
    black = 0,
    white,
    brown = 11,
    pink,
    yellow,
    aqua,
    gray
} flag_color; // definition at the time declaration
int main()
{   
    cout<<"Red: "<<red<<endl;
    cout<<"White: "<<white<<endl;
    cout<<"Gray: "<<gray<<endl;
    cout<<"blue: "<<blue<<endl;
    cout<<"Black: "<<black<<endl;
    cout<<"Yellow: "<<yellow<<endl;
    cout<<"Aqua: "<<aqua<<endl;
    cout<<"Pink: "<<pink<<endl;
    cout<<"Green: "<<green<<endl;
    colors painting;
    painting = brown;
    flag_color = green;
    cout << "Painting Colors: " << endl;
    for (int i = painting; i <= 15; ++i)
    {
        cout << painting + i << " ";
    }
    return 0;
}