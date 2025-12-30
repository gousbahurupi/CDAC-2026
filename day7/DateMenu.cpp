#include <iostream>

using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date() : day(1), month(1), year(2000) {}
    ~Date() {}

    void setDay(int d) { day = d; }
    void setMonth(int m) { month = m; }
    void setYear(int y) { year = y; }

    int getDay() const { return day; }
    int getMonth() const { return month; }
    int getYear() const { return year; }

    void initDate()
    {
        day = 1;
        month = 1;
        year = 2000;
    }

    void printDateOnConsole() const
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Day, Month, Year: ";
        cin >> day >> month >> year;
    }

    bool isLeapYear() const
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n--- Date Menu ---" << endl;
        cout << "1. Initialize Date" << endl;
        cout << "2. Accept Date" << endl;
        cout << "3. Display Date" << endl;
        cout << "4. Check Leap Year" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            d.initDate();
            cout << "Date reset to default." << endl;
            break;
        case 2:
            d.acceptDateFromConsole();
            break;
        case 3:
            d.printDateOnConsole();
            break;
        case 4:
            if (d.isLeapYear())
                cout << "It is a Leap Year." << endl;
            else
                cout << "It is NOT a Leap Year." << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}