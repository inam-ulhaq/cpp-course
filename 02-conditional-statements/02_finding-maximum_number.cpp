// Title: Finding Maximum Number
// Author: Inam Ul Haq
// Description: 
//      This program takes two integer inputs from the user and determines 
//      which one is greater or if both are equal. It also uses input validation 
//      to ensure the user enters only integers.
//
//      Features:
//          - Uses a while loop with std::cin to validate input
//          - Clears the error state and ignores leftover characters in the buffer
//          - Compares numbers using relational operators
//          - Displays the result
//
//      Relational operators used:
//          >   Greater than
//          ==  Equal to
//          <   Less than
//
//      Input validation process:
//          - Check if the input stream failed
//          - If yes, clear the error flag with cin.clear()
//          - Then ignore all remaining characters up to newline
//          - Prompt the user again for correct input

#include <iostream>
#include <limits>

int main(){
    int num1, num2;

    std::cout << "Enter (num1 and num2): ";

    // Input validation loop
    while (!(std::cin >> num1 >> num2)) {
        std::cin.clear(); // clear error flags
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore bad input
        std::cerr << "Invalid input. Please enter integer values (num1 and num2): ";
    }

    // Compare the two numbers
    if (num1 > num2) {
        std::cout << "Value: " << num1 << " is greater." << std::endl;
    } 
    else if (num1 == num2) {
        std::cout << "Both values are equal." << std::endl;
    } 
    else {
        std::cout << "Value: " << num2 << " is greater." << std::endl;
    }

    return 0;
}
