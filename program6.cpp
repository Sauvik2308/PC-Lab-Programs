#include <iostream>

class Year {
private:
    int year;

public:
    // Constructor
    Year(int y) : year(y) {}

    // Function to check if the year is a leap year
    bool isLeapYear() const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Destructor
    ~Year() {
        std::cout << "Year object is destroyed." << std::endl;
    }
};

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    Year y(year);
    if (y.isLeapYear()) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}
