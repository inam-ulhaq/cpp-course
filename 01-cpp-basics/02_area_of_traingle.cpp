// Title: Area of Triangle Calculator
// Author: Inam Ul Haq
// Description: 
//      This program calculates the area of triangle given its base and height.

#include <iostream>
#include <cstdlib>
#include <limits>

int main(){
    float triangleBase,triangleHeight; // variables for  base and height

    std::cout<<"Enter Base and Height: ";
    while(!(std::cin>>triangleBase>>triangleHeight)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cerr<<"Invalid input. Please re-enter base and height: ";

    }// taking input from user

    double triangleArea=(triangleBase*triangleHeight)/2.0; // calculating triangle area
     
    std::cout<<"Area of a triangle: "<<triangleArea<<std::endl; //displaying output

    return EXIT_SUCCESS;

}