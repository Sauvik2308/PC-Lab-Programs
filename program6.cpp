#include <iostream>

using namespace std;

class Year
{
private:
    int year;

public:
    // Constructor
    Year(int y) : year(y) {}

    // Function to check if the year is a leap year
    bool isLeapYear() const
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Destructor
    ~Year()
    {
        cout << "Year object is destroyed." << endl;
    }
};

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    Year y(year);
    if (y.isLeapYear())
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
