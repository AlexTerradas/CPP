#include <iostream>

int main()
{
    // FORMULA C to F : 0°C × 9/5) + 32 = 32°F
    // FORMULA F to C : (32°F − 32) × 5/9 = 0°C

    std::cout << "Simple Temperature Conversion" << std::endl;
    std::cout << "******************************" << std::endl;

    char choice;
    std::cout << "Choose the desired unit of measurement: ";
    std::cin >> choice;


    switch (choice)
    {
    case 'C':
    case 'c':
        {
            double celsius;
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> celsius;
            double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            std::cout << celsius << "C is equal to " << fahrenheit << "F" << std::endl;
        }
        break;
    case 'F':
    case 'f':
        {
            double fahrenheit;
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> fahrenheit;
            double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            std::cout << fahrenheit << "F is equal to " << celsius << "C" << std::endl;
        }
        break;
    default:
        std::cout << "Invalid choice. Please enter 'C' for Celsius or 'F' for Fahrenheit." << std::endl;
        std::cout << "Exiting the program." << std::endl;
        std::cout << "******************************" << std::endl;
        return 1; // Exit if invalid choice
        break;
    }

    std::cout << "Thank you for using the temperature conversion program!" << std::endl;
    std::cout << "******************************" << std::endl;
    return 0;
}