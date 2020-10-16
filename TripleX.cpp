#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n\nYou're a wizard trapped inside a dungeon, trying to escape numerous magical monsters and beasts...\n";
    std::cout << "You come across a giant stone gate which has writing on it...\n";
    std::cout << "The writing says to put the runes you see at the bottom of the gate in the correct order to pass...\n\n\n";
    std::cout << R"( _.------.                        .----.__
           /         \_.       ._           /---.__  \
          |  O    O   |\\___  //|          /       `\ |
          |  .vvvvv.  | )   `(/ |         | o     o  \|
          /  |     |  |/      \ |  /|   ./| .vvvvv.  |\
         /   `^^^^^'  / _   _  `|_ ||  / /| |     |  | \
       ./  /|         | O)  O   ) \|| //' | `^vvvv'  |/\\
      /   / |         \        /  | | ~   \          |  \\
      \  /  |        / \ Y   /'   | \     |          |   ~
       `'   |  _     |  `._/' |   |  \     7        /
         _.-'-' `-'-'|  |`-._/   /    \ _ /    .    |
    __.-'            \  \   .   / \_.  \ -|_/\/ `--.|_
 --'                  \  \ |   /    |  |              `-
                       \uU \UU/     |  /   )" << "\n\n\n\n";
    
}

bool PlayGame() 
{
    PrintIntroduction();
    int CodeA = 4;
    int CodeB = 7;
    int CodeC = 8;

    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

 
    std::cout << "-There are three numbers in the code\n";
    std::cout << "-The codes add-up to: " << CodeSum << "\n";
    std::cout << "-The codes multiply to: " << CodeProduct << std::endl;    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    

    int GuessSum  = GuessA + GuessC + GuessB;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "\nYou put the runes in the right order! You have escaped the dungeon";
        return true;
    }
    else
    {
        std::cout << "\nYou put the runes in the wrong order! A cyclops has caught you and you have failed to escape the dungeon ";
        return false;
    }


}


int main()
{
    while (true)
    {   
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    return 0;
}
