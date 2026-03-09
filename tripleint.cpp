#include <iostream>

int main() {
    int number;
    // Prompt the user for input
    std::cout << "Please enter an integer: ";

    // Read the integer from the user
    std::cin >> number;

    // Triple the integer and print the result
    int tripled_number = number * 3;
    std::cout << "The tripled number is: " << tripled_number << std::endl;

    return 0;
}
//
// Created by trent on 1/29/2026.
//