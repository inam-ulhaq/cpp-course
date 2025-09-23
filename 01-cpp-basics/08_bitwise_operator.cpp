// Title: Bitwise Operator
// Author: Inam Ul Haq
// Description: 
//     Bitwise operators perform operations directly on the binary 
//     representation (bits) of integer types. They are very fast and mostly used 
//     in low-level programming, embedded systems, and optimization.

#include <iostream>
int main() {
    int num1 = 3, num2 = 6; // num2 -> 00000110 , num1 -> 00000011 (in binary)

    std::cout << (num1 & num2) << std::endl; // AND: 00000010 -> 2
    
    std::cout << (num1 | num2) << std::endl; // OR: 00000111 -> 7

    std::cout << (num1 ^ num2) << std::endl; // XOR: 00000101 -> 5

    std::cout << (~num1) << std::endl; // NOT: flips all bits of 3 
    // (in 32 bits gives 111111...1100 = -4)
    
    std::cout << (num2 >> 1) << std::endl; // Right Shift: 00000011 -> 3

    std::cout << (num1 << 1) << std::endl; // Left Shift: 00000110 -> 6

    return 0;
}
