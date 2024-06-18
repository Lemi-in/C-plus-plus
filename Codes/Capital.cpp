#include <iostream>
using namespace std;

struct Stock
{
    char name[20];
    float earningPshare;
    float pricePshare;
};

void stockPrice(const Stock &stock)
{
    float antiPrice = stock.earningPshare * stock.pricePshare;
    cout << "The Anticipated Price for " << stock.name << " is: $" << antiPrice << endl;
}

int main()
{
    Stock stock[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the stock name: ";
        cin.getline(stock[i].name, 20);

        cout << "Enter the earning per share: ";
        cin >> stock[i].earningPshare;
        cout << "Enter the price per share: ";
        cin >> stock[i].pricePshare;
    }

    for (int i = 0; i < 3; i++)
    {
        stockPrice(stock[i]);
    }

    return 0;
}
