#include <iostream>
#include <vector>
#include <string>


// This file demonstrates the use of variables in C++.
// Variables are used to store data that can be changed during program execution.
// It includes examples of different types of variables such as int, double, char, string, bool, and const.
int main() 
{
    // Variables are used to store data that can be changed during program execution.
    
    // Integer (hole number) variables
    int x;              // Declare an integer variable
    x = 5;              // Assign a value to the variable
    
    int y = 10;         // Declare and initialize another integer variable
    
    int sum = x + y;    // Calculate the sum of x and y
    
    std::cout << "The value of x is: " << x << std::endl;               // Output the value of x
    std::cout << "The value of y is: " << y << std::endl;               // Output the value of x
    std::cout << "The value of the sum of x and y is : " << std::endl;  // Output the sum of x and y
    
    // double (floating-point number) variables
    double pi = 3.14;   // Declare and initialize a double variable
    
    std::cout << "The value of pi is: " << pi << std::endl;             // Output the value of pi
    
    // char (single character) variables
    char grade = 'A';  // Declare and initialize a char variable
    std::cout << "The value of grade is : " << grade << std::endl;
    
    //string (a sequence of characters) variables
    std::string name = "Alex";  // Declare and initialize a string variable
    
    std::cout << "The value of name is : " << name << std::endl; // Output the string value
    
    // boolean (true/false) variables
    bool isPassed = true;  // Declare and initialize a boolean variable
    
    std::cout << "The value of isPassed is : " << std::boolalpha << isPassed << std::endl; // Output the boolean value
    
    // const (unchangeable) variables
    const int MAXSCORE = 100;  // Declare a constant variable
    
    std::cout << "The value of maxScore is : " << MAXSCORE << std::endl; // Output the constant value

    // Local variables
    int localVar = 20; // Local variable of this file
    std::cout << "The value of localVar is: " << localVar << std::endl; // Output the local variable

    // Global variables
    static int globalVar = 30; // Static variable with global scope
    std::cout << "The value of globalVar is: " << globalVar << std::endl; // Output the global variable
    return 0;
}
