#include "cube.h"

Cube::Cube(double s, double x, double y, double z)
{
	side = s;
	this->x = x;
	this->y = y;
	this->z = z;
}

Cube::Cube(const Cube& c)
{
	x = c.x;
	y = c.y;
	z = c.z;
	side = c.side;
}

void Cube::print() const {
	std::cout << "Cube side length = " << side << std::endl;
	std::cout << "center --> (" << x << ", " << y << ", " << z << ")\n";
	std::cout << "area of  " << area() << " & volume of " << volume() << std::endl;
}

Cube Cube::operator+(point& p)
{
	x = x + p.getX();
	y = y + p.getY();
	z = z + p.getZ();
	Cube c{ side, x, y, z };
	return c;
}


