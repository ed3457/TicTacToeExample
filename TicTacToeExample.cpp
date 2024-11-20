// TicTacToeExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;
int main(string args[])
{   
    try {
        TicTacToe game1;
        char userChoice = ' ';
        while (true)
        {
            game1.play();

            cout << "Do you want to play again? (y,n)\n";
            cin >> userChoice;
            if (userChoice == 'n')
                break;


        }

        cout << "Number of X wins:" << game1.getXWin() << endl;
        cout << "Number of O wins:" << game1.getOWin() << endl;
        cout << "Number of draws:" << game1.getDraw() << endl;

    }

    catch (int code)
    {
        switch (code)
        {
        case 1:
        {}
        break;

        case 2:
        {}
        break;
        case 3:
        {}
        break;
        default:
            break;
        }

    }
    // TODO: Have the game keep going until the user decides to quit the program. Once the user quits,
    // print out how many times X won, and how many times O won
   /* game1.resetGame();
    game1.setLocation(1, 1, 'O');
    game1.setLocation(2, 2, 'O');
    game1.setLocation(3, 3, 'O');
    game1.printBoard();
   
    cout << game1.checkWin('O');*/
}

