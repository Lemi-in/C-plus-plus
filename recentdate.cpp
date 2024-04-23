#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

bool Larger(const Date &date1, const Date &date2)
{
    if (date1.year > date2.year)
    {
        return true;
    }
    else if (date1.year == date2.year)
    {
        if (date1.month > date2.month)
        {
            return true;
        }
        else if (date1.month == date2.month)
        {
            if (date1.day > date2.day)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    Date date1, date2;
    cout << "Enter the first date (dd mm yyyy): ";
    cin >> date1.day >> date1.month >> date1.year;
    cout << "Enter the second date (dd mm yyyy): ";
    cin >> date2.day >> date2.month >> date2.year;

    if (Larger(date1, date2))
    {
        cout << "The Later date is " << date2.day << "/" << date2.month << "/" << date2.year << endl;

    }
    else
    {
        cout << "The most recent date is " << date1.day << "/" << date1.month << "/" << date1.year << endl;
    }
    
    return 0;
}
