#pragma once
#include"Shape.h"

class ThreeDimensionalShape: public Shape
{
public:
	ThreeDimensionalShape();
	virtual void print() const;
	virtual double area() const = 0;
	virtual double volume() const = 0;
	double x, y, z;
};