/*
 * Box.hpp
 *
 *  Created on: Sep 19, 2019
 *      Author: Alex Clark
 */

#ifndef BOX_HPP_
#define BOX_HPP_

class Box {
	double length;
	double breadth;
	double height;
	public:Box (double l, double b, double);
	double getVolume();
	Box operator+(Box b);
	bool operator==(Box b);
};

#endif /* BOX_HPP_ */
