#include <iostream>
#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"

using std::cout;

int main()
{
	//current main

	Square sqr(12, 2, 2);
	Sphere sph(5, 1.5, 4.5);
	Cube cub(2.2);
	Circle cir(3.5, 6, 9);
	Shape *ptr[4] = { &cir, &sqr, &sph, &cub };

	for (int x = 0; x < 4; ++x)
		cout << *(ptr[x]) << '\n';

	//new main

	std::cout << "New main:" << std::endl;
	point p1{ 1, 2, 3 };
	point p2{ 2, 3, 2 };

	std::cout << "\nnew circle:\n";
	Circle c{ cir + p2 };
	std::cout << c;

	std::cout << "\nnew square:\n";
	Square s{ sqr + p1 };
	std::cout << s;

	std::cout << "\nnew sphere:\n";
	Sphere ss{ sph + p2 };
	std::cout << ss;

	std::cout << "\nnew cube:\n";
	Cube cc{ cub + p1 };
	std::cout << cc;

	return 0;
}
