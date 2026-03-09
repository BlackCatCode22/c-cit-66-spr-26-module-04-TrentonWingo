#include <iostream>

int main() {
    int number;

    // Prompt the user for input
    std::cout << "Enter an integer: ";

    // Read the integer input from the user
    std::cin >> number;

    // Double the number
    int doubled_number = number * 2;

    // Print the result
    std::cout << "The double of " << number << " is " << doubled_number << std::endl;

    return 0;
}
//
// Created by trent on 1/29/2026.
//