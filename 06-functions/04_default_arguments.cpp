// Title: Default Arguments in C++
// Author: Inam Ul Haq
// Description:
// Default arguments allow us to specify values for parameters
// that will be used if the caller does not provide them.
// This reduces code duplication and makes function calls simpler.

#include <iostream>
using namespace std;

// A function with a default argument for 'age'
void displayInfo(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    // Case 1: Provide both arguments
    displayInfo("Ali", 25); // Name: Ali, Age: 25

    // Case 2: Provide only the name; age will use default = 18
    displayInfo("Sara");    // Name: Sara, Age: 18

    return 0;
}

// Notes:
// 1. Default arguments must be given from right to left.
//    Example: void func(int x, int y=10, int z=20);
// 2. If you pass your own value, it overrides the default.
// 3. Default arguments can be used with constructors, member functions, etc.
// 4. They make code shorter but you must still place them carefully
//    (non-default parameters first).
