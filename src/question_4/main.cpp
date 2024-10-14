#include <iostream>
#include "question4.h"

int main() {
    int num1, num2;

    // Prompt the user for two integers
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Call find_gcd function
    int result = find_gcd(num1, num2);
// Output the result
    if (result != -1) {
        std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    } else {
        std::cout << "There are no common factors." << std::endl;
    }

    return 0;
}