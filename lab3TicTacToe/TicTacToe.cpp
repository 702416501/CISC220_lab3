/*
 * TicTacToe.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Allie DeAbreu, Alex Clark, Jason Belak, Carrie Graham
 */
#include <iostream>
#include <string>
#include "TicTacToe.hpp"

using namespace std;

TicTacToe::TicTacToe(string name1, string name2) {
	string xName = name1;
	string yName = name2;
	initBoard();
}
TicTacToe::~TicTacToe() {
	for (int i = 0; i < 3; i++) {
		delete board[i];
	}
	cout << "The board has been destroyed" << endl;
}

void TicTacToe::initBoard() {
	board = new char*[3];
	for (int i = 0; i < 3; i++) {
		board[i] = new char[3];
		for (int j = 0; j < 3; j++)
			board[i][j] = '-';
	}
}

void TicTacToe::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << board[i][j] << " ";
		cout << endl;
	}
}

bool TicTacToe::isBoardFull() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == '-')
				return false;
		} // for (int j=0; j<3; j++)
	}
	return true; // for (int i=0; i<3; i++)
} // isBoardFull

bool TicTacToe::isCheckWin(char y) {
	// Check Rows and Columns
	for (int i = 0; i < 3; i++) {
		int countRows = 0;
		int countColumns = 0;
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == y) countRows++;
			if (board[j][i] == y) countColumns++;
		} // for (int j=0; j<3; j++){
		if (countRows == 3 || countColumns == 3) {
			return true;
		} // if (count == 3)
	} // for (int i=0; i<3; i++)
	  // Check Diagonals
	int iLeft = 0;
	int jLeft = 0;
	int countLeft = 0;
	int iRight = 0;
	int jRight = 2;
	int countRight = 0;
	for (int count = 0; count < 3; count++) {
		if (board[iLeft][jLeft] == y) {
			countLeft++;
		}
		if (board[iRight][jRight] == y) {
			countRight++;
		}
		iLeft++;
		jLeft++;
		iRight++;
		iRight--;
	}
	if (countLeft == 3 || countRight == 3) {
		return true;
	}
	return false;
}
void TicTacToe::personPlay(char y) {
	if (y == 'x') {
		cout << xName << "'s turn:" << endl;
	} else {
		cout << yName << "'s turn:" << endl;
	}
	int rowNum;
	cout << "Enter the row number: " << endl;
	cin >> rowNum;
	int colNum;
	cout << "Enter the column number: " << endl;
	cin >> colNum;
	while (board[rowNum][colNum] != '-') {
		int rowNum;
		cout << "Enter the row number: " << endl;
		cin >> rowNum;
		int colNum;
		cout << "Enter the column number: " << endl;
		cin >> colNum;
	}
	if (y == 'x') {
		board[rowNum][colNum] = 'x';
	} else {
		board[rowNum][colNum] = 'o';
	}
	printBoard();
}
void TicTacToe::playGame() {
	bool cont = true;
	while (cont) {
		personPlay('x');
		printBoard();
		if (isCheckWin('x')) {
			cout << xName << " wins!" << endl;
			cont = false;
			continue;
		}
		if (isBoardFull()) {
			cout << "It's a tie!" << endl;
			cont = false;
			continue;
		}
		personPlay('y');
		printBoard();
		if (isCheckWin('y')) {
			cout << yName << " wins!" << endl;
			cont = false;
			continue;
		}
		if (isBoardFull()) {
			cout << "It's a tie!" << endl;
			cont = false;
			continue;
		}
	}
	printBoard();
}
