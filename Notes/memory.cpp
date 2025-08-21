#include <iostream>

void PrintValues(int& value);

int main()
{

    /*                                  -- MEMORY ADDRESS -- 
    *
    *  memory address = location in memory where data is stored
    *  a memory address can be accessed using &
    */
    int number = 42; // integer variable
    std::cout << "Memory address of number: " << &number << std::endl; // prints the memory address of number

    // we can also use references in C++ with fucntions so the value can be changed
    PrintValues(number); // passing number by reference to the function


    /*                                  -- POINTERS --
    *
    *  to access the value stored at a memory address, we can use a pointer
    *  a pointer is a variable that holds the address of another variable
    *  we can declare a pointer using the * operator
    *  we can also change the value of number using the pointer
    */
    int* ptr = &number; // pointer variable that holds the address of number
    *ptr = 100; // changing the value of number using the pointer
    std::cout << "Value of number using pointer: " << *ptr << std::endl; // dereferencing the pointer to get the value
    
    // the difference between a pointer and a reference is that a pointer can be null, while a reference cannot be null
}

void PrintValues(int& value)
{
    std::cout << "Value of number: " << value << std::endl; // prints the updated value of number
}