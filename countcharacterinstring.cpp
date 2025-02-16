#include <iostream>
#include<stdio.h>
using namespace std;
#include <cctype> // For isalpha() and isdigit()

int countCharacters(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        // Check if the character is a letter or a digit
        if (std::isalpha(ch) || std::isdigit(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int characterCount = countCharacters(input);

    std::cout << "Number of characters (letters or digits) in the string: " << characterCount << std::endl;

    return 0;
}
