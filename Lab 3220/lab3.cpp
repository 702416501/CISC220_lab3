/*
 * lab3.cpp
 *
 *  Created on: Sep 12, 2019
 *      Author: Allie DeAbreu, Alex Clark, Jason Belak
 */


#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

class  MathQuiz{

	int testNum;
	int corAns;
	int totAns;

public:

	MathQuiz (int num){
		testNum = num;
		corAns = 0;
		totAns = 0;

	}//Constructor

	int quest(){
		int ans;
		int num;//random num generate
		cout<<"What is"<<testNum<<"multiplied by"<<num<<endl;
		//cin<<ans<<;


	}

}; //MathQuiz



