#include"ThreeDimensionalShape.h"

class Cube : public ThreeDimensionalShape
{
public:
	Cube(double, double x = 0, double y = 0, double z = 0); //constructor
	Cube(const Cube&);//copy constructor
	virtual double volume() const{ return side * side * side; };
	virtual double area() const{ return 6 * side * side; };
	virtual void print() const;//virtual function for print
	Cube operator+(point&);
private:
	double side;
};

