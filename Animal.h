#ifndef ANIMAL_H
#define ANIMAL_H

#include "Entity.h"

class Animal : public Entity
{
public:
    Animal();
    Animal(string name,double energy,double power,double size,double weight, Point2D point,State state); 

  	virtual void Eat();
    virtual void Sleep();
	  virtual void SearchingForFood();
};

#endif
