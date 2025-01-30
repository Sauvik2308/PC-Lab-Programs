#include <iostream>
#include <cmath>

// Volume of a cube
double calculateVolume(double side) {
    return pow(side, 3);
}

// Volume of a cuboid
double calculateVolume(double length, double breadth, double height) {
    return length * breadth * height;
}

// Volume of a cone
double calculateVolume(double radius, double height, bool isCone) {
    return (1.0 / 3.0) * M_PI * radius * radius * height;
}

// Volume of a cylinder
double calculateCylinderVolume(double radius, double height) {
    return M_PI * radius * radius * height;
}

// Volume of a sphere
double calculateSphereVolume(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

int main() {
    int choice;
    std::cout << "Choose the shape to calculate volume:\n";
    std::cout << "1. Cube\n2. Cuboid\n3. Cone\n4. Cylinder\n5. Sphere\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            double side;
            std::cout << "Enter side of the cube: ";
            std::cin >> side;
            std::cout << "Volume of the cube: " << calculateVolume(side) << std::endl;
            break;
        }
        case 2: {
            double l, b, h;
            std::cout << "Enter length, breadth, and height of the cuboid: ";
            std::cin >> l >> b >> h;
            std::cout << "Volume of the cuboid: " << calculateVolume(l, b, h) << std::endl;
            break;
        }
        case 3: {
            double r, h;
            std::cout << "Enter radius and height of the cone: ";
            std::cin >> r >> h;
            std::cout << "Volume of the cone: " << calculateVolume(r, h, true) << std::endl;
            break;
        }
        case 4: {
            double r, h;
            std::cout << "Enter radius and height of the cylinder: ";
            std::cin >> r >> h;
            std::cout << "Volume of the cylinder: " << calculateCylinderVolume(r, h) << std::endl;
            break;
        }
        case 5: {
            double r;
            std::cout << "Enter radius of the sphere: ";
            std::cin >> r;
            std::cout << "Volume of the sphere: " << calculateSphereVolume(r) << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
