// Title: Working or Leisure Hours
// Author: Inam Ul Haq
// Description: 
//      This program takes an hour as input (in 24-hour format) 
//      and determines whether the given hour is a working hour 
//      or a leisure hour.
//
// Features:
//      - Uses the 0–24 hour format (inclusive).
//      - Uses relational and logical operators inside conditions 
//        to decide the result.
//      - Uses input validation to ensure the user enters a valid hour.
//
//      Working hours are considered from 09:00 to 18:00 (9 AM to 6 PM).
//      Any time outside this range is considered leisure hour.

#include <iostream>
#include <limits>

int main() {
    int hour;

    std::cout << "Enter hour (0–24): ";

    // Input validation loop
    while (!(std::cin >> hour)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Re-enter valid hour (0 to 24): ";
    }

    // Optional: check range explicitly (good practice)
    if (hour < 0 || hour > 24) {
        std::cerr << "Hour out of range. Please enter a value between 0 and 24.\n";
        return 1; // exit with error code
    }

    // Check working or leisure hours
    if (hour >= 9 && hour <= 18) {
        std::cout << hour << " is a working hour." << std::endl;
    } else {
        std::cout << hour << " is a leisure hour." << std::endl;
    }

    return 0;
}
