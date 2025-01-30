#include <iostream>

class Sample {
private:
    int value;

public:
    // Default constructor
    Sample() : value(0) {
        std::cout << "Default constructor called\n";
    }

    // Parameterized constructor
    Sample(int v) : value(v) {
        std::cout << "Parameterized constructor called\n";
    }

    // Copy constructor
    Sample(const Sample& other) : value(other.value) {
        std::cout << "Copy constructor called\n";
    }

    // Virtual destructor
    virtual ~Sample() {
        std::cout << "Destructor called\n";
    }

    // Function to display value
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Sample obj1;                // Default constructor
    Sample obj2(10);            // Parameterized constructor
    Sample obj3 = obj2;         // Copy constructor

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
