// Title: Enum Demonstration
// Author: Inam Ul Haq
// Description: 
//     Enumerations (enum) are user-defined data types in C++ 
//     that assign meaningful names to integral constant values.
//     This improves code readability by replacing magic numbers 
//     with descriptive identifiers.

#include <iostream>
#include <string>

enum Day {
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};

// Array to map enum values to their string names
const std::string dayNames[] = {
    "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday", "Sunday"
};

int main() {
    // Declare a variable of type enum Day
    Day today = Friday;

    // Print the integer value of enum
    std::cout << "Enum integer value of Friday: " << today << std::endl;

    // Print the name using our mapping array
    std::cout << "Enum name of Friday: " << dayNames[today] << std::endl;

    // Show how to input a day number and display its name
    int input;
    std::cout << "Enter a day number (0=Monday ... 6=Sunday): ";
    std::cin >> input;

    if (input >= Monday && input <= Sunday) {
        Day chosenDay = static_cast<Day>(input);
        std::cout << "You selected day: " << dayNames[chosenDay] << std::endl;
    } else {
        std::cout << "Invalid input." << std::endl;
    }

    return 0;
}
