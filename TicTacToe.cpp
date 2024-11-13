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

bool TicTacToe::checkWin(char player)
{
	// check rows 

	for (int i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] == board[i][2] == player)
			return true;

	}

	//check columns 

	for (int i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] == board[2][i] == player)
			return true;

	}

	// check diagonals 
	if (board[0][0] == board[1][1] == board[2][2] == player)
		return true;

	if (board[0][2] == board[1][1] == board[2][0] == player)
		return true;


	return false;
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
