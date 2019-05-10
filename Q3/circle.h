#include"TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape
{
public:
	Circle(double, double x = 0, double y = 0);    //constructor
	Circle(const Circle&);           //copy constructor
	virtual double area() const{ return pi*rad*rad; };
	virtual void print() const;           //virtual function for print
	Circle operator+(point&);
private:
	double rad;
};

