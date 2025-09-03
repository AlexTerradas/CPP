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

    // null pointer helps to determin if a pointer is pointing to a valid memory address or not
    int* nullPtr = nullptr;
    nullPtr = &number; // now nullPtr is pointing to the address of number

    // Dynamic Memory Allocation
    // Memory that is allocated after the program is already compiled and running
    // Useful when we don't know the size of the data at compile time

    int *pNum = NULL; // pointer variable initialized to null
    pNum = new int; // dynamically allocating memory for an integer

    *pNum = 500; // assigning value to the dynamically allocated memory

    std::cout << "Value of dynamically allocated memory: " << *pNum << std::endl;
    std::cout << "Adress of dynamically allocated memory: " << pNum << std::endl;

    delete pNum; // deallocating the memory to prevent memory leaks

    // Delete an array
    
    char *arrayChar = NULL;
    arrayChar = new char[50];

    delete[] arrayChar; // deallocating the memory for the array

    return 0;
}

void PrintValues(int& value)
{
    std::cout << "Value of number: " << value << std::endl; // prints the updated value of number
}