#include <iostream>

// Example of functions in C++
// Declaration of functions

void ExampleFunction();
void PassValuesFunction(int value);
void PassValuesFunciton(std::string value);
int ReturnFunction(int a, int b);

int main()
{
    std::cout << "Functions Example" << std::endl;
    // Call the example function
    ExampleFunction(); 

    // Call another function with an integer argument
    PassValuesFunction(42);
    
    // Call a function that returns a value
    std::cout << "The result of ReturnFunction is: " << ReturnFunction(5, 10) << std::endl;

    // Call an overloaded function with a string argument
    PassValuesFunciton("Hello, World!");
    
    return 0;
}

// Function definitions
// These functions can be defined in a separate file, e.g., functions.cpp

void ExampleFunction()
{
    // Example function to demonstrate function usage in C++
    std::cout << "This is an example function." << std::endl;
}

void PassValuesFunction(int value)
{
    // Function that takes an integer parameter
    std::cout << "The value passed to AnotherFunction is: " << value << std::endl;
}

// Overloaded function with a different parameter type
void PassValuesFunciton(std::string value)
{
    // Function that takes a string parameter
    std::cout << "The value passed to PassValuesFunciton is: " << value << std::endl;
}

int ReturnFunction(int a, int b)
{
    // Function that returns the sum of two integers
    return a + b;
}