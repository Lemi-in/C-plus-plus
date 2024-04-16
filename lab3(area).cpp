#include <iostream>
using namespace std;

class Area
{
private:
    int length;
    int breadth;
    

public:
    
    void setDim(int l, int b)
    {
        this ->length = l;
        this  -> breadth = b;
        
    }
   
    int getArea()
    {
        return length * breadth;
    }
};


int main() {
    Area area;
    int x, y ;
    cout << "Enter length and breadth: ";
    cin >> x >> y;
    area.setDim(x, y);
    cout << "Area is: " << area.getArea() << endl;

    

    return 0;
}
