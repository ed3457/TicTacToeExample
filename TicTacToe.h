#pragma once
#include <iostream>
#include <string>
using namespace std; 
class TicTacToe
{
private: 

	char board[3][3];

public:

	void setLocation(int row, int column, char player);
	bool checkWin(char player);
	void printBoard();
	void resetGame();
	void play();


};

