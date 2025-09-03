#include <iostream>

int main()
{
    // recursion is a programming technique where a function calls itself
    // break a complex problem into smaller sub-problems
    // less code and cleaner and useful for sorting and searching algorithms
    // use more memory and can be slower than iteration

    // iterative

    IterativeFunction(5);

    // recursive

    RecursiveFunction(5);

    return 0;
}

void IterativeFunction(int value)
{
    for(int i = value; i > 0; i--)
    {
        std::cout << i << std::endl;
    }
}

void RecursiveFunction(int value)
{
    if(value > 0) // if break condition is not met, stacle overflow occurs
    {
        std::cout << value << std::endl;
        RecursiveFunction(value - 1); // function calls itself
    }
}

int factorial(int n)
{
    if(n <= 1) // base case
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // recursive case
    }
}