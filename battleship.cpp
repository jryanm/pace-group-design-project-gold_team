/*************************************************************************************************
Battleship Game - PACE Group 1                                                      April 18, 2022

Program: The program will simulate a game of BATTLESHIP where a player inputs a set of coordinates
         and the game will output whether the guess was a "HIT" or a "MISS". Once every tile of
         every ship has been "HIT," the player wins and the game ends.

Current Status: Assignment 2 - Psuedocode has been written along with basic function definitions
                and their related stub functions.
                Basic structures have also been declared, but are very likely to change over time!
*************************************************************************************************/
#include <iostream>
using namespace std;

//************************************************************************************************
//      STRUCTS AND PROTOTYPES
//************************************************************************************************
// NOTE: Will probably make this all a header file later!
//************************************************************************************************
enum Direction {UP, DOWN, LEFT, RIGHT};
// The direction a boat is facing, uses coordinate location as a starting point and builds the
// ship tiles in the direction indicated.

struct Board{
// A game board consisting of an array of characters to indicate empty tiles and filled tiles.
    static const int NUM_ROWS = 10;     // The number of rows on the game board
    static const int NUM_COLS = 10;     // The number of columns on the game board
    char gameBoard[NUM_ROWS][NUM_COLS]; // An array of characters to store/display information
};
// NOTE: Two boards needed - One to store placed ships for the computer and one to display hits
// and misses to the player each round. Maybe declare something like Board player and Board computer?

struct Ship{
// A ship to be stored on the board - each ship has an associated size and direction it is facing
// when placed.
    int size;
    Direction direction;
};

//************************************************************************************************
void InitializeBoard();
// Post:    Sets all chars in both the player and computer game boards to '~'

void PlaceShips();
// Pre:     The computer's game board has been initialized
// Post:    Generate five ships and place them on the computer's game board.
//          Placed ships will change the characters in their coordinates to '#'

void ShowBoard();
// Pre:     The game board for the player has been filled with chars
// Post:    All characters on the board have been printed to the screen for the user.

void GetPlayerGuess();
// Post:    Two int coordinates are accepted from the player.

void CheckPlayerGuess();
// Pre:     All ships have been placed on the computer's game board and two coordinates have
//          been entered by the player.
// Post:    The player's game board has been updated with a 'H' for a hit or a 'M' for a miss.
//          A message indicating a HIT or a MISS is output for the user.

bool CompareBoards();
// Pre:     All ships have been placed on the computer's game board and the player's board has
//          been updated with the results of their previous guess.
// Post:    If all ships on the computer's board have been indicated as "HIT" on the player's
//          board, return true and the game ends.
//          Otherwise, return false and the game continues.

//************************************************************************************************
//      MAIN FUNCTION
//************************************************************************************************
int main()
{
    bool endGame = false; // Flag to end the game, initialized to "false"

    // Initialize player and computer boards
    InitializeBoard();

    // Place ships on computer's board
    PlaceShips();

    // Loop until player wins the game (currently loops until user types 'y' or 'Y')
    while(!endGame){
        // Output player's board to show hits/misses
        ShowBoard();

        // Accept a set of coordinates from the player
        GetPlayerGuess();

        // Check the coordinates on the computer's board
        CheckPlayerGuess();
            // If there is a ship there, update player's board with a HIT
            // If there is no ship, update the player's board with a MISS

        // Compare the player's board to the computer's board
        endGame = CompareBoards();
            // If all ship tiles have been hit, end the game
            // Otherwise, continue game
    }

    // After the game ends, maybe show the computer's board?
    ShowBoard();

    return 0;
}

//************************************************************************************************
//      FUNCTION DEFINITIONS
//************************************************************************************************
void InitializeBoard()
{
    cout << "IntializeBoard() was called." << endl;
}

//************************************************************************************************
void PlaceShips()
{
    cout << "PlaceShips() was called." << endl;
}

//************************************************************************************************
void ShowBoard()
{
    cout << "ShowBoard() was called." << endl;
}

//************************************************************************************************
void GetPlayerGuess()
{
    cout << "GetPlayerGuess() was called." << endl;
}

//************************************************************************************************
void CheckPlayerGuess()
{
    cout << "CheckPlayerGuess() was called." << endl;
}

//************************************************************************************************
bool CompareBoards()
{
    char input;

    cout << "CompareBoards() was called." << endl
         << "Type 'Y' to end the loop." << endl;
    cin  >> input;

    return toupper(input) == 'Y';
}
