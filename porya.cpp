#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Calculator {
public:
    int floor(double num) {
        return static_cast<int>(num);
    }
    int add(int a, int b) {
        return a + b;
    }
    double max1(double a, double b) {
        return (a > b) ? a : b;
    }
    bool find1(const std::string& str, char ch) {
        return str.find(ch) != std::string::npos;
    }
    int max2(const std::vector<int>& arr) {
        if (arr.empty()) {
            throw std::invalid_argument("Array is empty");
        }
        return *std::max_element(arr.begin(), arr.end());
    }
};

int main() {
    Calculator calc;
    std::cout << "Floor of 3.14: " << calc.floor(3.14) << std::endl;
    std::cout << "Sum of 5 and 7: " << calc.add(5, 7) << std::endl;
    std::cout << "Max of 3.5 and 7.2: " << calc.max1(3.5, 7.2) << std::endl;
    std::cout << "Character 'a' in 'hello': " << (calc.find1("hello", 'a') ? "true" : "false") << std::endl;
    std::vector<int> numbers = {1, 2, 3, 9, 5};
    std::cout << "Max in array {1, 2, 3, 9, 5}: " << calc.max2(numbers) << std::endl;

    return 0;
}
