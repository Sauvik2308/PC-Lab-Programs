#include <iostream>
#include <vector>
#include <algorithm>

class Number_List {
private:
    std::vector<int> numbers;

public:
    // Function to create an array at runtime
    void createArray(int size) {
        numbers.resize(size);
        std::cout << "Enter " << size << " integers:\n";
        for (int i = 0; i < size; ++i) {
            std::cin >> numbers[i];
        }
    }

    // Function to sort the array
    void sortArray() {
        std::sort(numbers.begin(), numbers.end());
    }

    // Function to find the minimum element
    int findMin() const {
        return *std::min_element(numbers.begin(), numbers.end());
    }

    // Function to find the maximum element
    int findMax() const {
        return *std::max_element(numbers.begin(), numbers.end());
    }

    // Function to display the array
    void displayArray() const {
        std::cout << "Array elements: ";
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Number_List list;
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    list.createArray(size);
    list.sortArray();

    list.displayArray();
    std::cout << "Minimum element: " << list.findMin() << std::endl;
    std::cout << "Maximum element: " << list.findMax() << std::endl;

    return 0;
}
