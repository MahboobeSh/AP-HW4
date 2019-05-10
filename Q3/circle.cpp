#include "circle.h"

Circle::Circle(double r, double x, double y)
{
	this->x = x;
	this->y = y;
	rad = r;
}

Circle::Circle(const Circle& c)
{
	x = c.x;
	y = c.y;
	rad = c.rad;
}

void Circle::print() const
{
	std::cout << "Circle radius = " << rad << std::endl;
	std::cout << "center --> (" << x << ", " << y << ")\n";
	std::cout << "area of   " << area() << std::endl;
}

Circle Circle::operator+(point& p)
{
	x = x + p.getX();
	y = y + p.getY();
	Circle c{ rad, x, y };
	return c;
}



