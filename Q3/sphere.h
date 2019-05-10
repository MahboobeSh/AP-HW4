#include"ThreeDimensionalShape.h"
#include<cmath>

class Sphere : public ThreeDimensionalShape
{
public:
	Sphere(double, double x = 0, double y = 0, double z = 0); //constructor
	Sphere(const Sphere&); //copy constructor
	virtual double volume() const { return (4. / 3.)*pi*radius*radius*radius; };
	virtual double area() const { return 4 * pi*radius*radius; };
	virtual void print() const;
	Sphere operator+(point&);
private:
	double radius;
};

