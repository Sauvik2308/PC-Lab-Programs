#include <iostream>
#include <cmath>

// Function to reverse digits
void calculate(int num, char ch) {
    if (ch == 'r') {
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + num % 10;
            num /= 10;
        }
        std::cout << "Reversed number: " << reversed << std::endl;
    } else if (ch == 'p') {
        if (num <= 1) {
            std::cout << num << " is not a prime number." << std::endl;
            return;
        }
        bool isPrime = true;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << num << " is a prime number." << std::endl;
        } else {
            std::cout << num << " is not a prime number." << std::endl;
        }
    } else {
        std::cout << "Invalid character entered." << std::endl;
    }
}

int main() {
    int num;
    char ch;

    std::cout << "Enter an integer and a character ('r' for reverse, 'p' for prime check): ";
    std::cin >> num >> ch;

    calculate(num, ch);

    return 0;
}
