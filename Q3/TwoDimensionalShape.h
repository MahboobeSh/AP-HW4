#pragma once
#include"Shape.h"

class TwoDimensionalShape : public Shape
{
public:
	TwoDimensionalShape();
	virtual void print() const;
	virtual double area() const = 0;
	double x, y;
};

