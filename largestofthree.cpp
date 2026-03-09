#include <iostream>

int main() {
    int num1, num2, num3, largest;

    std::cout << "Enter three integers separated by spaces: ";
    std::cin >> num1 >> num2 >> num3;

    // Determining the largest using nested if statements
    if (num1 >= num2) {
        if (num1 >= num3) {
            largest = num1;
        } else {
            largest = num3;
        }
    } else {
        if (num2 >= num3) {
            largest = num2;
        } else {
            largest = num3;
        }
    }

    std::cout << "The largest integer is: " << largest << std::endl;

    return 0;
}