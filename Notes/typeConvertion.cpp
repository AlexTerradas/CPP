#include <iostream>

// This file demonstrates the use of type conversion in C++.
// Type conversion is the process of converting a variable from one type to another.
// Conversion can be implicit or explicit.
// Implicit conversion is done by the compiler automatically
// Explicit conversion is done by the programmer using casting operators.
int main()
{
    double x = 3.14; // Declare and initialize a double variable

    std::cout << "Double value: " << x << std::endl; // Output the double value

    int y = static_cast<int>(x); // Explicit conversion from double to int using static_cast
    std::cout << "Int value: " << y << std::endl; // Output of the casted value

    std::cout << "int 100 to char" << ((char)100) << std::endl; // Implicit conversion from int to char, output the character representation

    int correctAnswers = 8; 
    int totalQuestions = 10;
    double percentage = correctAnswers / (double)totalQuestions * 100; // Explicit conversion to double for accurate division

    std::cout << "Percentage of correct answers: " << percentage << "%" << std::endl; // Output the percentage
}