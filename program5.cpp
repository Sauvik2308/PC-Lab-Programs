#include <iostream>

class Complex {
private:
    int real, imaginary;

public:
    // Default constructor
    Complex() : real(0), imaginary(0) {}

    // Constructor with one argument
    Complex(int r) : real(r), imaginary(0) {}

    // Constructor with two arguments
    Complex(int r, int i) : real(r), imaginary(i) {}

    // Function to display the complex number
    void show() const {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }

    // Function to add two complex numbers
    Complex sum(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1.sum(c2);

    std::cout << "First Complex Number: ";
    c1.show();
    std::cout << "Second Complex Number: ";
    c2.show();
    std::cout << "Sum of Complex Numbers: ";
    c3.show();

    return 0;
}
