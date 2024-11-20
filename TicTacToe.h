#pragma once
#include <iostream>
#include <string>
using namespace std; 
class TicTacToe
{
private: 

	char board[3][3];
	int xWin;
	int oWin;
	int draw;
public:

	void setLocation(int row, int column, char player);
	bool checkWin(char player);
	void printBoard();
	void resetGame();
	void play();

	int getXWin();
	int getOWin();
	int getDraw();


};

