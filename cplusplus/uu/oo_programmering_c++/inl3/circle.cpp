#ifndef CIRCLE_H
#define CIRCLE_H
#include "circle.h"
#endif

Circle::Circle(double x, double y, double radius)
{
	vert = Vertex(x,y);
	this->radius = radius;
}

double Circle::area()
{
	return M_PI*radius*radius;
}

void Circle::print()
{
	std::cout << "type: Circle" << std::endl;
	std::cout << "x: " << getX() << std::endl;
	std::cout << "y: " << getY() << std::endl;
	std::cout << "size: " << area() << std::endl;
}

/*int main()
{
	double x = 3;
	double y = 5;

	Circle c = Circle(x, y, 1);
	c.print();
	
	Circle c2 = c;
	c2.print();

	Circle c3 = c2;
	c3.print();

	return 0;
}*/