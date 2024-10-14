#include <iostream>
#include "question3.h"
int main() {
    double mass, velocity;
    char continue_program;

    do {
        // Input validation for mass
        std::cout << "Enter mass in kilograms: ";
        while (!(std::cin >> mass) || mass <= 0) {
            std::cout << "Invalid input. Please enter a positive number for mass: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        // Input validation for velocity
        std::cout << "Enter velocity in meters per second: ";
        while (!(std::cin >> velocity) || velocity < 0) {
            std::cout << "Invalid input. Please enter a non-negative number for velocity: ";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

        // Calculate and display kinetic energy
        double kinetic_energy = get_kinetic_energy(mass, velocity);
        std::cout << "The kinetic energy is: " << kinetic_energy << " joules" << std::endl;

        // Ask user if they want to continue
        std::cout << "Would you like to calculate another value? (y/n): ";
        std::cin >> continue_program;

    } while (tolower(continue_program) == 'y');

    return 0;
}