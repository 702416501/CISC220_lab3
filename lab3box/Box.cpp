/*
 * Box.cpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Alex Clark
 */

#include "Box.hpp"

Box::Box(double l, double b, double h) {
	length = l;
	breadth = b;
	height = h;
}
double Box::getVolume() {
	return length * breadth * height;
}

Box Box::operator+(Box b) { //Overload: add 2 Box objects.
	Box box(0,0,0);
	box.length = length + b.length;
	box.breadth = breadth + b.breadth;
	box.height = height + b.height;
	return box;
}

bool Box::operator ==(Box b) { //Overload: see if the volumes of two Box objects are equal.
	return (getVolume() == b.getVolume());
}

