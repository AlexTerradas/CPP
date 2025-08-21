#include <iostream>
#include <cmath> // For mathematical functions like abs, max, min

int main() 
{
    // Arithmetic operators in C++ are used to perform mathematical operations on variables and values.
    int a = 10; // Declare and initialize an integer variable
    int b = 5;  // Declare and initialize another integer variable

    std::cout << "Sum: " << (a + b) << std::endl;           // Addition
    std::cout << "Difference: " << (a - b) << std::endl ;   // Subtraction
    std::cout << "Product: " << (a * b) << std::endl;       // Multiplication
    std::cout << "Quotient: " << (a / b) << std::endl;      // Division
    std::cout << "Remainder: " << (a % b) << std::endl;     // Modulus
    std::cout << "Increment: " << (++a) << std::endl;       // Increment
    std::cout << "Decrement: " << (--b) << std::endl;       // Decrement  

    // Using cmath library for additional mathematical operations
    // Note: cmath provides functions for more complex mathematical operations

    std::cout << "Max value: " << std::max(a, b) << std::endl;              // Maximum value
    std::cout << "Min value: " << std::min(a, b) << std::endl;              // Minimum value
    std::cout << "Absolute value of -3: " << std::abs(-3) << std::endl;     // Absolute value
    std::cout << "Square root of a: " << std::sqrt(a) << std::endl;         // Square root
    std::cout << "Power of a^2: " << std::pow(a, 2) << std::endl;           // Power
    std::cout << "Round of 3.6: " << std::round(3.6) << std::endl;          // Round
    std::cout << "Ceiling of 3.2: " << std::ceil(3.2) << std::endl;         // Ceiling
    std::cout << "Floor of 3.8: " << std::floor(3.8) << std::endl;          // Floor
    
    // Note : link to all other cmath operators : https://cplusplus.com/reference/cmath/
    return 0;
}