#include <iostream>

// Array example in C++
// An array is a collection of elements of the same type, stored in contiguous memory locations.
// Values in an array can be accessed using an index, starting from 0.

int main()
{
    int numbers[5];

    // Initializing the array with values / for loop to iterate through the array
    for (size_t i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        numbers[i] = i;
        std::cout << "Element at index " << i << " is: " << numbers[i] << std::endl;
    }

    std::string names[3] = {"Alice", "Bob", "Charlie"};
    
    // foreach loop to iterate through the array
    for(std::string name : names)
    {
        std::cout << "Name: " << name << std::endl;
    }

    // Multidimensional array example
    int matrix[2][3] = {
                        {1, 1, 1}, 
                        {2, 2, 2}
                    };

    int matrixRows[][3] = {
                        {1, 2, 3}, 
                        {4, 5, 6},
                        {7, 8, 9}
                    };

    std::cout << "Matrix element at [0][1]: " << matrix[0][1] << std::endl;
    std::cout << "Matrix element at [1][2]: " << matrixRows[1][2] << std::endl;
}