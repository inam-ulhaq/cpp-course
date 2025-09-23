// Title: Overflow
// Author: Inam Ul Haq
// Description:
//     When the value of a variable increases beyond its capacity, it starts taking values 
//     from the beginning again. This phenomenon is called overflow. Overflow follows a cyclic
//     behavior.

#include <iostream>
#include <cstdlib>

int main() {

    // Example 1: Overflow in char
    char charNum = static_cast<char>(127); // assign the highest value char can hold

    ++charNum; // num is already at the highest value, so it will wrap to the minimum (-128)

    std::cout << "Value after overflow (char): " << static_cast<int>(charNum) << std::endl; // -128

    // Example 2: Overflow in int
    int intNum = 2147483647; // maximum value int can store

    intNum++; // value goes beyond the capacity

    std::cout << "Value after overflow (int): " << intNum << std::endl; // -2147483648

    return EXIT_SUCCESS;
}
