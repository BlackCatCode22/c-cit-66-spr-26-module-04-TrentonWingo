#include <iostream>

// Function to handle user input
int getAnIntFromTheUser() {
    int value;
    std::cout << "Enter an integer: ";
    while (!(std::cin >> value)) {
        std::cout << "Invalid input. Please enter a number: ";
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
    return value;
}

// Function to compare two integers and print the result
void compareTwoInts(int a, int b) {
    if (a == b) {
        std::cout << "The numbers are equal." << std::endl;
    } else {
        int larger = (a > b) ? a : b;
        std::cout << "The larger number is: " << larger << std::endl;
    }
}

// Function to return the sum of two integers
int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    // Break down the problem using the functions above
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();

    compareTwoInts(num1, num2);

    int sum = sumTwoInts(num1, num2);
    std::cout << "The sum of the two numbers is: " << sum << std::endl;

    return 0;
}