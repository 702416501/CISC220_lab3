/*
 * TicTacToe.hpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Allie
 */

#ifndef TICTACTOE_HPP_
#define TICTACTOE_HPP_
#include <string>

class TicTacToe{
	char **board;
	string xName;
	string yName;
public:
	TicTacToe(string name1, string name2);
	~TicTacToe();

	void initBoard();
	void printBoard();
	bool isBoardFull();
	bool isCheckWin(char y);
	void personPlay(char y);
	void playGame();


};



#endif /* TICTACTOE_HPP_ */
