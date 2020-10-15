#include <iostream>

int main()
{
    std::cout << "You're a wizard trapped inside a dungeon, trying to escape numerous magical monsters and beasts...\n";
    std::cout << "You come across a giant stone gate which has writing on it...\n";
    std::cout << "The writing says to put the runes you see at the bottom of the gate in the correct order to pass...";
     
    int CodeA = 4;
    int CodeB = 7;
    int CodeC = 8;

    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << std::endl << "-There are three numbers in the code";
    std::cout << std::endl << "-The codes add-up to: " << CodeSum;
    std::cout << std::endl << "-The codes multiply to: " << CodeProduct;
    
    return 0;
}
