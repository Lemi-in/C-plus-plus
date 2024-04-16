#include <iostream>
#include <cmath>

using namespace std;

class QuadraticEquation {
private:
    int a;
    int b;
    int c;
    float root;

public:
    void setCoe(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
        this ->root = root;
        
        root = sqrt(b * b - 4 * a * c);
    }

    float getRoot1() {
        if (a != 0 && root >= 0) {
            return (-b + root) / (2 * a);
        } else {
            cout << "a is less than zero the root value is negative" << endl;
            return NAN; 
        }
    }

    float getRoot2() {
        if (a != 0 && root >= 0) {
            return (-b - root) / (2 * a);
        } else {
            cout << "a is less than zero or the root value is negative" << endl;
            return NAN; 
        }
    }
};

struct Quadratic{
    int a;
    int b;
    int c;
    float root;
    
};
float getRoot1(Quadratic q) {
    if (q.a != 0 && q.root >= 0) {
        return (-q.b + q.root) / (2 * q.a);
    } else {
        cout << "a is less than zero the root value is negative" << endl;
        return NAN; 
    }
}
float getRoot2 (Quadratic q) {
    if (q.a != 0 && q.root >= 0) {
        return (-q.b - q.root) / (2 * q.a);
    } else {
        cout << "a is less than zero or the root value is negative" << endl;
        return NAN; 
    }
}




int main() {

    
    QuadraticEquation q;
    int a, b, c;
     
    cout << "Enter a, b, c: ( for class) ";
    cin >> a >> b >> c;
    q.setCoe(a, b, c);

    Quadratic q1;
    cout << "Enter a, b, c:(for structure)";
    cin >> q1.a >> q1.b >> q1.c;
    

    cout << "Root 1(for class): " << q.getRoot1() << endl;
    cout << "Root 2(for class ): " << q.getRoot2() << endl;
    cout << "Root 1(for structure ): " << getRoot1(q1) << endl;
    cout << "Root 2(for structure): " << getRoot2(q1) << endl;
   



    return 0;
}
