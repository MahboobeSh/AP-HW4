#include"TwoDimensionalShape.h"


class Square : public TwoDimensionalShape
{
public:
	Square(double, double x = 0, double y = 0); //constructor
	Square(const Square&);//copy constructor
	virtual double area() const { return side*side; };
	virtual void print() const; //virtual function for print
	Square operator+(point&);
private:
	double side;
};

