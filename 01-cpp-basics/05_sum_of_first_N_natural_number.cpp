// Title: Sum of First N Natural Numbers
// Author Inam Ul Haq
// Description: 
//      The program calculates the sum of first N natural numbers. i.e sum of first 5
//      natural numbers is 1 + 2 + 3 + 4 + 5 = 15. To calculate this we use a formula
//      n*(n+1)/2.

#include <iostream>
#include <limits>
#include <cstdlib>

int main(){

    int numberLimit; // varible to hold number limit

    std::cout<<"Enter a positive integer (N): ";

    //input validation 
    while(!(std::cin>>numberLimit ) || numberLimit<=0){
        std::cin.clear(); // reset the fail state of std::cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // clear input buffers
        std::cerr<<"Invalid input. Please enter a posivtive integer: ";
    }

    // calculate sum
    int sum=numberLimit*(numberLimit+1)/2;

    // display sum 
    std::cout<<"Sum of first N natural numbers is "<<sum<<std::endl;

    return EXIT_SUCCESS;
}