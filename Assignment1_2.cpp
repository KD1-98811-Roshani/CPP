#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole()
    {
        cout << "Day : " << day << endl;
        cout << "Month : " << month << endl;
        cout << "Year : " << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Day : ";
        cin >> day;

        cout << "Month : ";
        cin >> month;

        cout << "Year : ";
        cin >> year;
    }

    bool isLeapYear()
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            return true;
        else
            return false;
    }
};

int menuList()
{
    int choice;

    cout << "\n0. Exit" << endl;
    cout << "1. Accept Date" << endl;
    cout << "2. Print Date" << endl;
    cout << "3. Check Leap Year" << endl;
    cout << "Enter choice : ";
    cin >> choice;

    return choice;
}

int main()
{
    Date dt;
    int choice;

    dt.initDate();

    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
            case 1:
                dt.acceptDateFromConsole();
                break;

            case 2:
                dt.printDateOnConsole();
                break;

            case 3:
                if (dt.isLeapYear())
                    cout << "It is a Leap Year." << endl;
                else
                    cout << "It is not a Leap Year." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}