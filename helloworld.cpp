#include <iostream>

int main() 
{
    std::cout << "Hello, World!" << '\n'; // faster
    std::cout << "Bye!" << std::endl;     // flushes the output buffer
    return 0;
}