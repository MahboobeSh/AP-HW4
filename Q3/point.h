#ifndef _POINT_H_
#define _POINT_H_

class point
{
public:
	point(double, double, double z = 0);//constructor
	point();	//default constructor
	point(const point&);	//copy constructor
	double getX(); //x value
	double getY();	//y value
	double getZ(); //z value
private:
	double x, y, z;
};



#endif
