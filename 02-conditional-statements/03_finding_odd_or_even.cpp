// Title: Finding Odd or Even 
// Author: Inam Ul Haq 
// Description:
//      This program takes an integer input from the user and checks whether 
//      the number is odd or even using a conditional statement (if and else). 
//      It also uses input validation to ensure the user enters a valid integer.
//
//      How it works:
//          - Input validation: ensures only integer input is accepted
//          - Modulus operator (%): used to determine remainder after division by 2
//              if (number % 2 == 0) ? even
//              else ? odd
//
//      Odd and Even Facts:
//          - Even numbers are divisible by 2 without remainder.
//          - Odd numbers are not divisible by 2 without remainder (remainder 1 or -1).
//          - Zero is considered an even number.

#include <iostream>
#include <limits>

int main(){
    int input;

    std::cout << "Enter integer value: ";

    // Input validation loop
    while (!(std::cin >> input)) {
        std::cin.clear(); // clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
        std::cout << "Invalid input. Re-enter valid integer value: ";
    }

    // Check if the number is even or odd
    if (input % 2 == 0) {
        std::cout << "Value: " << input << " is an even number." << std::endl;
    }
    else {
        std::cout << "Value: " << input << " is an odd number." << std::endl;
    }

    return 0;
}
