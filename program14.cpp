#include <iostream>

class Numbers {
private:
    int a, b;

public:
    Numbers(int x, int y) : a(x), b(y) {}

    friend void swapNumbers(Numbers& n);

    void display() const {
        std::cout << "a = " << a << ", b = " << b << std::endl;
    }
};

void swapNumbers(Numbers& n) {
    n.a = n.a + n.b;
    n.b = n.a - n.b;
    n.a = n.a - n.b;
}

int main() {
    Numbers nums(5, 10);

    std::cout << "Before swapping: ";
    nums.display();

    swapNumbers(nums);

    std::cout << "After swapping: ";
    nums.display();

    return 0;
}
