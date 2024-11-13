#include "TicTacToe.h"

void TicTacToe::setLocation(int row, int column, char player)
{
	// validation
	if (row < 1 || row >3 || column < 1 || column>3)
		throw 1;// wrong input for coords
	if (player != 'o' && player != 'O' && player != 'x' && player != 'X')
		throw 2;// wrong player symbol 


	// set the location to the player char 
	board[row-1][column-1] = player;
}

void TicTacToe::printBoard()
{
	cout << "-------------\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "| ";
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " | ";
		}
		cout << "\n-------------\n";
	}

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
