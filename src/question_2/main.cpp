#include <iostream>
#include "question2.h"

int main() {
    int num1 = 5;
    int num2 = 5;

    // Modify by value
    modifyByValue(num1);
    std::cout << "After modifyByValue, num1: " << num1 << std::endl;  // Output will be 5 (no change)

    // Modify by reference
    modifyByReference(num2);
    std::cout << "After modifyByReference, num2: " << num2 << std::endl;  // Output will be 15 (changed)

    return 0;
}