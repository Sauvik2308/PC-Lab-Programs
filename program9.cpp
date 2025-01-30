#include <iostream>

// Inline function to calculate square
inline int square(int num) {
    return num * num;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Square of " << number << " is " << square(number) << std::endl;
    return 0;
}
