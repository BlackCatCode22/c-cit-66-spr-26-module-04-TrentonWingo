
//#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string userInput;

    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, userInput);

    // Reverses the string in-place using iterators
    std::reverse(userInput.begin(), userInput.end());

    std::cout << "Reversed string: " << userInput << std::endl;

    return 0;
}