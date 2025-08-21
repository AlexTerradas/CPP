#include <iostream>

int main() 
{
    // Example of using loops in C++
    // For loop to iterate a fixed number of times
    // While loop to repeat until a condition is false
    // Do-while loop to ensure the loop runs at least once
    // Foreach loop to iterate over elements in a collection
    // Range-based for loop to iterate over elements in a container
    // Nested loops to create a grid or matrix structure
    // Infinite loop to repeat indefinitely until a break condition is met

    std::cout << "Loops Example" << std::endl;
    
    // For loop example
    int count = 0;
    std::cout << "Enter number of loops" << std::endl;
    for (int i = 0; i < count; ++i)
    {
        std::cout << "Loop iteration: " << i + 1 << std::endl;
    }
    std::cout << std::endl;

    // While loop example
    int limit = 0;
    std::cout << "Enter a limit for the while loop" << std::endl;
    std::cin >> count;
    
    std::cout << "While loop example" << std::endl;
    while (limit < count)
    {
        std::cout << "Count: " << count << std::endl;
        limit++;
    }
    std::cout << std::endl;

    // Do-while loop example
    int doLimit = 0;
    std::cout << "Enter a limit for the do-while loop" << std::endl;
    std::cin >> count;
    do 
    {
        std::cout << "Do-while loop count: " << doLimit << std::endl;
        doLimit++;
    } while (doLimit < count);
    std::cout << std::endl;

    // Range-based for loop example
    std::cout << "Range-based for loop example" << std::endl;
    int arr[] = {1, 2, 3, 4, 5};
    for (const auto& num : arr) 
    {
        std::cout << "Element: " << num << std::endl;
    }
    std::cout << std::endl;
    
    // Nested loop example
    std::cout << "Nested loop example" << std::endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 2; ++j) 
        {
            std::cout << "i: " << i << ", j: " << j << std::endl;
        }
    }
    std::cout << std::endl;
    
    // Infinite loop example 

    std::cout << "Infinite loop example (press Ctrl+C to stop)" << std::endl;
    int infiniteCount = 0;
    while (true) 
    {
        std::cout << "Infinite loop count: " << infiniteCount << std::endl;
        infiniteCount++;
        if (infiniteCount >= 5)
            break;
    }
    std::cout << std::endl;

    return 0; 
}