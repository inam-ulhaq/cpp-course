// Title: Compound Assignment Operator
// Author: Inam Ul Haq
// Description:
//     Demonstrates the use of compound assignment operators in C++.
//     These operators perform an operation on a variable and store
//     the result back into the same variable in a concise way.

#include <iostream>
#include <cstdlib>

int main() {
    int num = 5;

    std::cout << "Initial value of num: " << num << std::endl; // Prints 5

    // Using compound assignment operator instead of num = num + 10
    num += 10;  // num = 5 + 10 -> 15
    std::cout << "After num += 10: " << num << std::endl; // Prints 15

    // Additional examples:
    num -= 3;  // num = 15 - 3 -> 12
    std::cout << "After num -= 3: " << num << std::endl; // Prints 12

    num *= 2;  // num = 12 * 2 -> 24
    std::cout << "After num *= 2: " << num << std::endl; // Prints 24

    num /= 4;  // num = 24 / 4 -> 6
    std::cout << "After num /= 4: " << num << std::endl; // Prints 6

    num %= 5;  // num = 6 % 5 -> 1
    std::cout << "After num %= 5: " << num << std::endl; // Prints 1

    return EXIT_SUCCESS;
}
