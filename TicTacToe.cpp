#include "TicTacToe.h"

void TicTacToe::setLocation(int row, int column, char player)
{
	// validation 

	// set the location to the player char 

}

void TicTacToe::resetGame()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}

	}

}
