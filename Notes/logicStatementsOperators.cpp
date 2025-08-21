#include <iostream>

int main() 
{
    // Example of using if statements in C++
    
    std::cout << "If Statements Example" << std::endl;
    int x = 10;
    
    if (x > 5) 
    {
        // Do something if a condition is true
        std::cout << "x is greater than 5" << std::endl;
    } else if (x == 5) 
    {
        // Do something else if another condition is true
        std::cout << "x is equal to 5" << std::endl;
    } else 
    {
        // Do something if none of the above conditions are true
        std::cout << "x is less than 5" << std::endl;
    }

    // Example of using nested if statements

    std::cout << "Enter a value for x: ";
    std::cin >> x; // Read a new value for x

    if (x > 0) 
    {
        std::cout << "x is positive" << std::endl;
        if (x % 2 == 0) 
        {
            // Check if x is even
            std::cout << "x is even" << std::endl;
        } else 
        {
            // If x is not even, it must be odd
            std::cout << "x is odd" << std::endl;
        }
    } else 
    {
        std::cout << "x is not positive" << std::endl;
    }

    // Example of switch statement for multiple conditions

    int choice;
    std::cout << "Enter a number (1-3): ";
    std::cin >> choice;

    switch (choice) 
    {
        case 1:
            std::cout << "You chose option 1" << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2" << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    // Ternary operator example

    int a = 5, 
    b = 10;

    int max = (a > b) ? a : b; // Find the maximum of a and b
    std::cout << "The maximum value is: " << max << std::endl;


    // LOGIC OPERATORS

    // && (Logical AND)
    // Example: Check if both conditions are true

    int a;
    int b;

    std::cout << "Enter the value of the first integer: ";
    std::cin >> a;
    std::cout << std::endl;

    std::cout << "Enter the value of the second integer: ";
    std::cin >> b;
    std::cout << std::endl;

    if (a > 0 && b > 0) 
    {
        // Both a and b are positive
        std::cout << "Both numbers are positive." << std::endl;
    } else 
    {
        // At least one of them is not positive
        std::cout << "At least one number is not positive." << std::endl;
    }

    // || (Logical OR)
    // Example: Check if at least one condition is true

    if (a > 0 || b > 0) 
    {
        // At least one of a or b is positive
        std::cout << "At least one number is positive." << std::endl;
    } else 
    {
        // Both a and b are not positive
        std::cout << "Both numbers are not positive." << std::endl;
    }

    // ! (Logical NOT)
    // Example: Invert a condition
    
    if (!(a > 0)) 
    {
        // a is not positive
        std::cout << "The first number is not positive." << std::endl;
    } else 
    {
        // a is positive
        std::cout << "The first number is positive." << std::endl;
    }

    return 0;
}