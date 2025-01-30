#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

protected:
    double getRadius() const {
        return radius;
    }

public:
    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() const {
        return M_PI * radius * radius;
    }
};

int main() {
    Circle circle;
    double r;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    circle.setRadius(r);

    std::cout << "Area of the circle: " << circle.calculateArea() << std::endl;

    return 0;
}
