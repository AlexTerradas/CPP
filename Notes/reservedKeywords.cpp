#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // Define a type alias for variable and use it in the code
using text_t = std::string; // Define a type alias for text

int main()
{
    std::vector<std::pair<std::string, int>> pairList = {{"one", 1}, {"two", 2}, {"three", 3}};
    pairlist_t pairList2 = {{"one", 1}, {"two", 2}, {"three", 3}};

    // Output the pairs in the pairList and pairList2
    std::cout << "Typedef List"<< std::endl;
    for(const auto& pair : pairList) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    std::cout << std::endl; 
    
    std::cout << "Using List" << std::endl;
    for(const auto& pair : pairList2) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }
    
    std::cout << std::endl; 

    text_t text = "Using type alias for text";
    std::cout << "Text: " << text << std::endl;

    return 0;
} 
