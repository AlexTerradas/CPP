#include <iostream>

int main()
{
    // Size in bytes of different data types in C++
    int intgr;          // Size of int 2 or 4 bytes depending on the system
    double dbl;         // Size of double 8 bytes
    char chr;           // Size of char 1 byte
    bool boolean;       // Size of bool 1 byte
    float flt;          // Size of float 4 bytes
    long lng;           // Size of long 4 or 8 bytes depending on the system
    short sht;          // Size of short 2 bytes
    std::string str;    // Size of string varies, but typically 32 bytes for the object itself plus the size of the characters it contains
    std::string arrStr[3] = {"a", "b", "c"}; // Array of strings, size depends on the number of strings and their lengths
    
    std::cout << "Size of int: " << sizeof(intgr) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(dbl) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(chr) << " bytes" << std::endl;
    std::cout << "Size of bool: " << sizeof(boolean) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(flt) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(lng) << " bytes" << std::endl;
    std::cout << "Size of short: " << sizeof(sht) << " bytes" << std::endl;
    std::cout << "Size of string: " << sizeof(str) << " bytes" << std::endl;
    std::cout << "Size of Array of strings: " << sizeof(arrStr) << " bytes" << std::endl;
}