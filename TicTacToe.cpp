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
	

	for (int i = 0; i < 3; i++)
	{
		// check rows 
		if (board[i][0] ==player && board[i][1] == player && board[i][2] == player)
			return true;

		//check columns 
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
			return true;
	}

	

	// check diagonals 
	if (board[0][0] == player &&  board[1][1] == player && board[2][2] == player)
		return true;

	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
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

void TicTacToe::play()
{
	// reset board

	// start with X player 

	// loop while there is no winner 
	  // ask the current player to place their char on a location 
	  // check for a win 
	     // if there is a winner, announce it, then end the game
	     // else switch to the next player 

	// end the game: 
	   // one of the players wins
	   // draw 


}
