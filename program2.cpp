#include <iostream>
#include <cmath>

class Triangle {
private:
    double side1, side2, side3;

public:
    // Member function to input sides of the triangle (defined inside the class)
    void inputSides() {
        std::cout << "Enter the lengths of the three sides of the triangle: ";
        std::cin >> side1 >> side2 >> side3;
    }

    // Member function to calculate the perimeter (defined inside the class)
    double calculatePerimeter() const {
        return side1 + side2 + side3;
    }

    // Member function to calculate the area (defined outside the class)
    double calculateArea() const;

    // Member function to display results (defined outside the class)
    void display() const;
};

// Definition of calculateArea() outside the class
double Triangle::calculateArea() const {
    double s = calculatePerimeter() / 2; // Semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Definition of display() outside the class
void Triangle::display() const {
    std::cout << "Perimeter of the triangle: " << calculatePerimeter() << std::endl;
    std::cout << "Area of the triangle: " << calculateArea() << std::endl;
}

int main() {
    Triangle triangle;
    triangle.inputSides();
    triangle.display();

    return 0;
}
