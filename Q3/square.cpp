#include "square.h"


Square::Square(double s, double x, double y)
{
	this->x = x;
	this->y = y;
	side = s;
}

Square::Square(const Square& s)
{
	x = s.x;
	y = s.y;
	side = s.side;
}

void Square::print() const
{
	std::cout << "Square side length = " << side << std::endl;
	std::cout << "center --> (" << x << ", " << y << ")\n";
	std::cout << "area of " << area() << std::endl;
}

Square Square::operator+(point& p)
{
	x = x + p.getX();
	y = y + p.getY();
	Square c{ side, x, y };
	return c;
}
