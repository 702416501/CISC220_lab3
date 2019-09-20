/*
 * Problem4Main.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Alex Clark
 */

#include <iostream>
#include <stdlib.h>
#include "Box.hpp"
using namespace std;

int main(void) {
	bool equalVol = false;
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);
	Box Box3 = Box1 + Box2;
	double volume = Box3.getVolume();
	if (Box1 == Box2) equalVol = true;
	if (equalVol == 0) cout << "Vol. of two boxes is not equal." << endl;
	if (equalVol == 1) cout << "Vol. of two boxes is equal." << endl;
	cout << "Vol. of Box3 : " << volume << endl;
	return 0;
}
