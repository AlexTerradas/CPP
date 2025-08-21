#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Hipotenusa Calculator" << std::endl;
    double a;
    double b;
    double c;

    std::cout << "Enter the length of side a: "; // Prompt user for side a
    std::cin >> a; // Read the input for side a
    
    std::cout << "Enter the length of side b: "; // Prompt user for side b
    std::cin >> b; // Read the input for side b

    c = std::sqrt(std::pow(a, 2) + std::pow(b , 2)); // Calculate the hypotenuse using the Pythagorean theorem

    std::cout << "The length of the hypotenuse is: " << c << std::endl; // Output the result
    return 0; // Return 0 to indicate successful execution
}