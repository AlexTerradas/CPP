#include <iostream>

// This file demonstrates how to use the console for input in C++.
int main()
{
    std::string name; // Declare a string variable to hold the user's name
    std::cout << "Please enter your name: "; // Prompt the user for input
    std::cin >> name;

    std::string sureName;
    std::cout << "Please enter your surname: "; // Prompt the user for their surname
    // std::ws is used to ignore any leading whitespace characters      
    std::getline(std::cin >> std::ws, sureName); // Read the full line including spaces

    int age;
    std::cout << "Please enter your age: "; // Prompt the user for their age
    std::cin >> age;

    std::cout << "Hello, " << name << " " << sureName << " ,You are " << age << " years old." << std::endl; // Output a greeting message

    return 0;
}