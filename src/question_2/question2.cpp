#include "question2.h"

// Function that demonstrates passing by value (no changes outside)
void modifyByValue(int a) {
    a = a + 10;  // Modify the value
}

// Function that demonstrates passing by reference (changes reflect outside)
void modifyByReference(int &a) {
    a = a + 10;  // Modify the value, which will reflect outside the function
}
