#include "Shape.h"


	//ostream function for cout
std::ostream & operator<<(std::ostream & os, const Shape & s)
{
	s.print();	//will do the other functions by default
	return os;
}