// Title: Functions in C++
// Author: Inam Ul Haq
// Description:
//   Monolithic Programming:
//     In this style of programming, the entire program is written inside 
//     a single function body. This approach was common in the early days 
//     of programming when computers were used for very basic and small tasks. 
//     As computers began handling larger and more complex tasks, programs 
//     became bigger, and monolithic programming became harder to manage.
//
//   Problems with Monolithic Programming:
//     - A single error can affect the entire program.
//     - Difficult to remember and maintain the whole program. For example, 
//       a program of 10,000 lines cannot be easily written or modified at once.
//     - Teamwork is difficult. Only one programmer can work on the function at 
//       a time; work cannot be distributed among team members.
//     - Debugging becomes time-consuming and complicated.
//
//   To address these issues, we divide the program into manageable, reusable 
//   pieces called *functions*.
//
//   Functions:
//     - A function is a block of code designed to perform a specific task.
//     - It may take input parameters and may return a result (a return value).
//     - Functions promote procedural and modular programming.
//     - They can be reused multiple times within a program, in other programs, 
//       or even shared with other programmers.
//     - A collection of functions forms a library. (C/C++ provide many 
//       functions through standard libraries.)
//     - A function can take multiple parameters but can return only one value 
//       directly (though you can return multiple values indirectly via 
//       references, pointers, or structures).
//     - Communication should occur primarily through the `main()` function. 
//       Other functions should minimize direct user interaction and 
//       instead facilitate the main function.
//
//   Structure of a Function in C++:
//     return_type function_name(parameter_list) {
//       // body of the function
//       return value; // if return_type is not void
//     }
//
//   Example Program (Defining and Using a Function)


#include <iostream>
using namespace std;
 // Step 1: Function Declaration (Prototype)
 int addNumbers(int a, int b);

 // Step 2: Main Function
 int main() {
   int num1, num2;
   std::cout << "Enter two numbers: ";
   std::cin >> num1 >> num2;

   // Call the function and store its return value in 'sum'
   int sum = addNumbers(num1, num2);

   std::cout << "The sum is: " << sum << std::endl;
   return 0;
 }

 // Step 3: Function Definition
 int addNumbers(int a, int b) {
   // Return the sum of two numbers
   return a + b;
 }
//
//   Notes:
//     - Function declaration (prototype) is written before main().
//       This allows main() to call the function even if the definition appears later.
//     - Function definition contains the actual logic.
//     - Functions improve modularity, readability, and reusability.
//     - You can also define the function entirely above main() and skip the prototype.
//     - Functions can return different data types or even void (no return).
