#include <iostream>
#include "question1.h"

using namespace std;

int main() {
    int number;
    char choice;

    do {
        // Prompt user for input
        cout << "Enter a number between 1 and 15: ";
        cin >> number;

        // Validate input
        while (number < 1 || number > 15) {
            cout << "Invalid input. Please enter a number between 1 and 15: ";
            cin >> number;
        }

        // Call Fibonacci function and display result
        int fib_number = get_fib_number(number);
        cout << "The Fibonacci number for " << number << " is " << fib_number << endl;

        // Ask if the user wants to exit or continue
        cout << "Do you want to calculate another Fibonacci number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}