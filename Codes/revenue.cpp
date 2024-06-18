#include <iostream>
using namespace std;


class Product
{
    private:
    string name;
    float cost;
    int quantity;
    float R;
    int expense = 1000;

    public:
    void getData (string n, float c, int q)
    {
        name = n;
        cost = c;
        quantity = q;
    }
    void DispData()
    {
        cout << "Name: " << name << endl;
        cout << "Cost: " << cost << endl;
        cout << "Quantity: " << quantity << endl;
    }   
    float calcRevenue()
    {
        R = cost * quantity;
        return R;
    }
    float Tax()
    {
        return R * 0.15;
    }
    int calProfit()
    {
        return R - expense - Tax();
    }
};

int main()
{
    Product product;
    int n;
    cout<<"Enter the number of products: ";
    cin>>n;
    cout<<endl;

    cout<<"Enter the product details: "<<endl;
    string name;
    float cost;
    int quantity;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the product name: ";
        cin >> name;
        cout << "Enter the product cost: ";
        cin >> cost;
        cout << "Enter the product quantity: ";
        cin >> quantity;
        product.getData(name, cost, quantity);

        
    }

    for (int i = 0; i < n; i++)
    {
        cout<< "Product " << i + 1 << endl;
        cout << "Revenue: " << product.calcRevenue() << endl;
        cout << "Tax: " << product.Tax() << endl;
        cout << "Profit: " << product.calProfit() << endl;

    }
    cout<<endl;
    cout<<"Displaying the product details: "<<endl;
    for (int i = 0; i < n; i++)
    {

        product.DispData();
    }
         return 0;
}


