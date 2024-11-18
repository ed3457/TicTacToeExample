#include "TicTacToe.h"

void TicTacToe::setLocation(int row, int column, char player)
{
	// validation
	if (row < 1 || row >3 || column < 1 || column>3)
		throw 1;// wrong input for coords
	if (player != 'o' && player != 'O' && player != 'x' && player != 'X')
		throw 2;// wrong player symbol 

	if (board[row - 1][column - 1] != ' ')
		throw 3;// the cell is not empty!

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
	resetGame();
	// start with X player 
	char currentPlayer = 'X';
	bool gameWon = false;
	int counter = 0;
	// loop while there is no winner 
	while (true)
	{
		counter += 1;
		cout << currentPlayer << " please enter a location:\n";
		int r, c;
	    // ask the current player to place their char on a location
		cin >> r;
		cin >> c;
		setLocation(r, c, currentPlayer);
		// check for a win 
		// if there is a winner, announce it, then end the game
		gameWon=checkWin(currentPlayer);
		if (gameWon)
		{
			cout << "Player " << currentPlayer << " won!\n";
			break;

		}
		else if (counter == 9)
		{
			
	       // draw 
			cout << "Draw!\n";
			break;
		}
		else
		{

			// else switch to the next player 

			currentPlayer = (currentPlayer == 'x' || currentPlayer == 'X') ? 'O' : 'X';

		}

	}
	   
	 

	


}
