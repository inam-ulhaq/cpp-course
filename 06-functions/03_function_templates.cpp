// Title: Function Templates in C++
// Author: Inam Ul Haq
// Description:
// A function template lets you write one function that works with any data type
// such as int, float, double, string or even user-defined types.
// Instead of writing multiple overloaded functions for each type,
// the compiler generates the correct function for the type you use at compile time.

// Syntax of a function template:
// template <typename T>
// T functionName(T parameter1, T parameter2) {
//     // function body
// }
// 'typename T' (or 'class T') declares a placeholder for a type.
// Inside the function T behaves like a normal type until the real type is chosen.

// Example: A generic add() function template
#include <iostream>
using namespace std;

// This template works for int, double, string etc.
// It takes two parameters of type T and returns their sum.
template <typename T>
T add(T a, T b) {
    return a + b;  // '+' must be valid for the type T
}

int main() {
    // Using the add() template with different data types

    // Explicitly specify int as the type parameter
    cout << add<int>(3, 4) << endl;            

    // Explicitly specify double as the type parameter
    cout << add<double>(3.5, 4.2) << endl;     

    // Using string as the type parameter
    cout << add<string>("Hi ", "There") << endl; 

    // Type deduction:
    // The compiler can automatically deduce the type from arguments.
    cout << add(5, 10) << endl;           // int inferred
    cout << add(3.5, 1.2) << endl;        // double inferred

    return 0;
}

// Notes about function templates:
// 1. They are evaluated at compile time (no runtime overhead).
// 2. They reduce code duplication and improve maintainability.
// 3. If the type you pass doesn’t support the operations inside the template,
//    the compiler will give an error at compile time.
// 4. You can have multiple template parameters like this:
//    template <typename T1, typename T2>
//    void display(T1 a, T2 b) { cout << a << " " << b; }
// 5. You can provide default template parameters like this:
//    template <typename T = int>
//    T square(T x) { return x * x; }
