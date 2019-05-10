#include "sphere.h"

Sphere::Sphere(double r, double x, double y, double z)
{
	radius = r;
	this->x = x;
	this->y = y;
	this->z = z;
}

Sphere::Sphere(const Sphere& g)
{
	x = g.x;
	y = g.y;
	z = g.z;
	radius = g.radius;
}

void Sphere::print() const {
	std::cout << "Sphere radius = " << radius << std::endl;
	std::cout << "center --> (" << x << ", " << y << ", " << z << ")\n";
	std::cout << "area of  " << area() << " & volume of " << volume() << std::endl;
}


Sphere Sphere::operator+(point& p)
{
	x = x + p.getX();
	y = y + p.getY();
	z = z + p.getZ();
	Sphere c{ radius, x, y, z };
	return c;
}