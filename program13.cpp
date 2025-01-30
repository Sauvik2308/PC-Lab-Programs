#include <iostream>

class Time {
private:
    int hours, minutes, seconds;

public:
    // Overload >> to input time
    friend std::istream& operator>>(std::istream& in, Time& t) {
        std::cout << "Enter time (hours minutes seconds): ";
        in >> t.hours >> t.minutes >> t.seconds;
        return in;
    }

    // Overload << to display time
    friend std::ostream& operator<<(std::ostream& out, const Time& t) {
        out << t.hours << "h " << t.minutes << "m " << t.seconds << "s";
        return out;
    }

    // Overload + to add two times
    Time operator+(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60;
        result.seconds %= 60;
        result.hours = hours + other.hours + result.minutes / 60;
        result.minutes %= 60;
        return result;
    }

    // Overload == to compare times
    bool operator==(const Time& other) const {
        return (hours == other.hours && minutes == other.minutes && seconds == other.seconds);
    }
};

int main() {
    Time t1, t2;
    std::cin >> t1 >> t2;

    Time t3 = t1 + t2;
    std::cout << "Sum of times: " << t3 << std::endl;

    if (t1 == t2) {
        std::cout << "Times are equal." << std::endl;
    } else {
        std::cout << "Times are not equal." << std::endl;
    }

    return 0;
}
