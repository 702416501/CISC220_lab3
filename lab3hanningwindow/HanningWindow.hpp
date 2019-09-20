/*
 * HanningWindow.hpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Allie DeAbreu,
 */

#ifndef HANNINGWINDOW_HPP_
#define HANNINGWINDOW_HPP_

class HanWindow {
	int windowSize;
	int *originalArr;
	int arrSize;
	int *filteredArr;

public:
	HanWindow(int winSize, int *oArr, int aSize, int *fArr );
	int weightedAverage(int val);
	void changeWindow(int size);
	void filterArr();
	void printArray(bool x);
	void graphArray(bool x);
};




#endif /* HANNINGWINDOW_HPP_ */
