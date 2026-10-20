#include <iostream>
#include <string>
#include <vector>

std::string intToRoman(int num) {
    const std::vector<int> values = { 10, 9, 5, 4, 1 };
    const std::vector<std::string> symbols = { "X", "IX", "V", "IV", "I" };

    std::string result = "";

    for (size_t i = 0; i < values.size(); ++i) {
        while (num >= values[i]) {
            result += symbols[i];
            num -= values[i];
        }
    }

    return result;
}

int main() {
    int number;

    std::cout << "Enter an integer (1 - 10): ";
    std::cin >> number;

    if (number < 1 || number > 10) {
        std::cout << "Invalid input!" << std::endl;
    }
    else {
        std::string roman = intToRoman(number);
        std::cout << "The Roman numeral for " << number << " is: " << roman << std::endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file