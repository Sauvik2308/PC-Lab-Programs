#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    // Friend function to add two complex numbers
    friend Complex add(const Complex &c1, const Complex &c2);

    void display() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

Complex add(const Complex &c1, const Complex &c2)
{
    return Complex(c1.real + c2.real, c1.imaginary + c2.imaginary);
}

int main()
{
    Complex c1(3, 4), c2(1, 2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex c3 = add(c1, c2);

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
