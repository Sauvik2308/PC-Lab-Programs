#include <iostream>
#include <string>
#include <algorithm>

class String {
private:
    std::string str;

public:
    String(const std::string& s = "") : str(s) {}

    // Overload + operator to concatenate strings
    String operator+(const String& other) const {
        std::string result = str + other.str;
        std::reverse(result.begin(), result.end());
        return String(result);
    }

    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    String s1("Hello"), s2("World");
    String s3 = s1 + s2;

    std::cout << "Concatenated and reversed string: ";
    s3.display();

    return 0;
}
