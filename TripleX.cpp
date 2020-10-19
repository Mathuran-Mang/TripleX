#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{   
    printf("\n\nYou're a wizard trapped inside floor %d of a dungeon, trying to escape numerous magical monsters and beasts...\n",Difficulty);
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

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);
    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;

    
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
        printf( "\n*** You put the runes in the right order! You have escaped floor %d of the dungeon! Keep going! ***",Difficulty);
        return true;
    }
    else
    {
        std::cout << "\n*** You put the runes in the wrong order! Try again ***";
        return false;
    }


}


int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    int const MaxLevel = 4;
    while (LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
    {   
        
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete) 
        {
           LevelDifficulty++; 
        }
    }
    printf("/n*** You have escaped the final floor you have completed the game! ***");
    return 0;
}
