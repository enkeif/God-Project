#ifndef RANDOMG_H
#define RANDOMG_H

#include "Entity.h"
#include "Point2D.h"

class RandomG
{
public:
	Point2D getRanodmCordinates();
	void getRandomDamage(Entity& someEntity);
};

#endif
