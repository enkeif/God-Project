#include "RandomG.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

usingnamespace std;

Point2D RandomG::getRanodmCordinates()
{
	Point2D position;
	srand(time(NULL));             // srand() gives the random function a new starting point time(NULL)garanties getting a new starting point every time
	double x1 = rand() % 100 + 0;  //generates random numbers from 0 to 100
	double y1 = rand() % 100 + 0;
	position = Point2D(x1, y1);
	return position;
}

double RandomG::RandomNumber() 
{      	srand(time(NULL));
	double number = rand() % 50 + 1;
        return number;
}

void RandomG::getRandomDamage(Entity& someEntity)
{
	srand(time(NULL));                   
	int randomNum = rand() % 3 + 1;   // random number between 1-3
	switch (randonNum)
	{
	case 1:
		someEntity.setEnergy(someEntity.getEnergy() - 1);
		break;
	case 2:
		someEntity.setPower(someEntity.getPower() - 2);
		break;
	case 3:
		someEntity.setEnergy(someEntity.getEnergy() - 3);
		someEntity.setPower(someEntity.getEnergy() - 1);
		break;
	}
}
