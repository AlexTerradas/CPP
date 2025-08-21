#include <iostream>

int main() 
{
    char operation;
    double num1, num2;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "**************************" << std::endl;

    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation)
    {
        case '+':
            std::cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;

        case '-':
            std::cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;

        case '*':
            std::cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;

        case '/':
            if (num2 != 0) 
            {
                std::cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            } 
            else 
            {
                std::cout << "Error: Division by zero!" << std::endl;
                return 1; // Exit if division by zero
            }
            break;

        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1; // Exit if operation is invalid
            break;
    }
    
    std::cout << "**************************" << std::endl;
    std::cout << "Thanks for using the calculator" << std::endl;

    return 0;
}