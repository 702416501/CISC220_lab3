/*
 * lab3.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Allie DeAbreu, Alex Clark, Jason Belak, Carrie Graham
 */

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

class MathQuiz {

	int testNum;
	int corAns;
	int totAns;

public:

	MathQuiz(int num) {
		testNum = num;
		corAns = 0;
		totAns = 0;

	} //Constructor

	int quest() {
		totAns += 1;
		int stans; //declaring student answer
		int n = rand() % 13 + 1; //random num generate between 1 and 13
		int ans = n * testNum;
		cout << "What is " << testNum << " multiplied by " << n << "?" << endl;
		cin >> stans; //read in student answer
		if (stans == ans) {
			corAns += 1;
			return corAns;
		} else {
			return totAns;
		}

	} //question

	void grade() {
		cout << "You got " << corAns << " questions out of " << totAns
				<< " questions correct" << endl;
	}

};
//MathQuiz

int main() {
	MathQuiz q(2);
	for (int i = 0; i < 15; i++) {
		q.quest();
	}
	q.grade();
	return 0;
}
