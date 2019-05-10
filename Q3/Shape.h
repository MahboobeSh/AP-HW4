#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
#include<sstream>
#include"point.h"
#include <cmath>

class Shape
{
public:
	Shape() {};
	virtual void print() const {};
	
	double pi{ acos(-1) };
};
std::ostream& operator<<(std::ostream&, const Shape&);

#endif