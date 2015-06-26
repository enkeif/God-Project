#ifndef RANDOMG_H
#define RANDOMG_H

#include "Entity.h"
#include "Point2D.h"

class RandomG
{
public:
	Point2D getRanodmCordinates();
	double RandomNumber();
	void getRandomDamage(Entity& someEntity);
};

#endif
