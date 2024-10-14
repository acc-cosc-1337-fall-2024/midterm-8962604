#include <iostream>
using namespace std;

// Function with value parameter
void incrementValue(int value) {
    value++;  // Only modifies the local copy
}

// Function with reference parameter
void incrementReference(int& ref) {
    ref++;  // Modifies the original variable
}

int main() {
    int num1 = 5;
    int num2 = 5;

    // Call function with value parameter
    incrementValue(num1);
    cout << "Value after passing by value: " << num1 << endl;  // Should still be 5

    // Call function with reference parameter
    incrementReference(num2);
    cout << "Value after passing by reference: " << num2 << endl;  // Should be 6

    return 0;
}
