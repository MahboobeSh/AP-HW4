#include "point.h"
#include<cmath>
#include<iostream>

point::point(double a, double b, double c)
{
	x = a;
	y = b;
	z = c;
}

point::point() : x{}, y{}, z{}{}

point::point(const point& a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

double point::getX() {
	return x;
}

double point::getY() {
	return y;
}

double point::getZ() {
	return z;
}

