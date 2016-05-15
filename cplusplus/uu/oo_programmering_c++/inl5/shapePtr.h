#ifndef SHAPEPTR_H
#define SHAPEPTR_H

#include <iostream>
#include <vector>
#include "shape.h"
#include "point.h"
#include "circle.h"
#include "rectangle.h"
#include "polygon.h"

class ShapePtr {
	public:
		ShapePtr();
		ShapePtr(Shape* shp);
		~ShapePtr();
		void printElement();
		Shape* shape;
	
	private:
		//Shape* shape;
};
#endif
