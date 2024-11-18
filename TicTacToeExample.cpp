// TicTacToeExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;
int main(string args[])
{
    TicTacToe game1;
    game1.play();
    // TODO: Have the game keep going until the user decides to quit the program. Once the user quits,
    // print out how many times X won, and how many times O won
   /* game1.resetGame();
    game1.setLocation(1, 1, 'O');
    game1.setLocation(2, 2, 'O');
    game1.setLocation(3, 3, 'O');
    game1.printBoard();
   
    cout << game1.checkWin('O');*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
