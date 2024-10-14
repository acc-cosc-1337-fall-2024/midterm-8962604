#include "question4.h"

// Function to find the greatest common divisor (GCD) of two numbers
int find_gcd(int a, int b) {
    if (a == 0 || b == 0) return -1; // Handle edge case if one number is zero

    int gcd = -1; // Initialize gcd to -1 (default return value if no common factors)
    
    // Loop through numbers from 1 to the smaller of the two numbers
    for (int i = 1; i <= (a < b ? a : b); ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Update gcd if i is a common divisor
        }
    }
    
    return gcd; // Return the GCD or -1 if no common factors
}