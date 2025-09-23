// Title: Roots of Qudratic Equation
// Author: Inam Ul Haq
// Descreption: 
//      ax^2 + bx + c this is a qudratic expresion, if we equal this to 0 i.e 
//      ax^2 + bx + c = 0 then this becoming a quadratic equation which have 
//      roots, mean possible values, now to calculate those values we use a 
//      qudratic formula:
//      root1 = (-b+sqrt((b*b)-4*a*c))/(2*a)
//      root2 = (b+sqrt((b*b)-4*a*c))/(2*a)
// now convert this into code

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip> // for std::setprecision

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b, c (respectively): ";

    while (!(std::cin >> a >> b >> c)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cerr << "Invalid input. Please enter numbers: ";
    }

    if (a == 0) {
        if (b != 0) {
            double root = -c / b;
            std::cout << "Linear equation. Root: " << root << std::endl;
        } else {
            std::cout << "Invalid equation. Coefficients a and b cannot both be zero." << std::endl;
        }
        return EXIT_SUCCESS;
    }

    double discriminant = b*b - 4*a*c;

    std::cout << std::fixed << std::setprecision(2);

    if (discriminant > 0) {
        double positiveRoot = (-b + sqrt(discriminant)) / (2*a);
        double negativeRoot = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Positive root: " << positiveRoot << std::endl;
        std::cout << "Negative root: " << negativeRoot << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        std::cout << "Both roots are equal: " << root << std::endl;
    } else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-discriminant) / (2*a);
        std::cout << "Complex roots: " << realPart << " + " << imagPart << "i and "
        << realPart << " - " << imagPart << "i" << std::endl;
    }

    return EXIT_SUCCESS;
}


