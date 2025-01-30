#include <iostream>
#include <string>

class String {
private:
    std::string str;

public:
    // Constructor
    String(const std::string& s = "") : str(s) {}

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }

    // Function to join two strings
    String join(const String& other) const {
        return String(str + other.str);
    }
};

int main() {
    String s1("Hello"), s2("World");
    String s3 = s1.join(s2);

    std::cout << "First String: ";
    s1.display();
    std::cout << "Second String: ";
    s2.display();
    std::cout << "Joined String: ";
    s3.display();

    return 0;
}
