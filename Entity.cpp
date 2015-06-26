#include "Entity.h"

#include<iostream>
#include<string>

using namespace std;

Entity::Entity() 
{ this->name = " ";
  this->energy = 0;
  this->power = 0;
  this->size = 0;
  this->weight = 0;
  this->point = new Point2D();
  this->state = State.Unknown;
}

Entity::Entity(string name,double energy,double power,double size,double weight, Point2D point,State state) 
{ this->name = name;
  this->energy = energy;
  this->power = power;
  this->size = size;
  this->weight = weight;
  this->point = new Point2D();
  this->state = state.Unknown;               
};                   

             
void Entity::Attack(Entity entityAttacked) {
     entityAttacked.setEnergy(entityAttacked.getEnergy() - this->getPower());
};
     
void Entity::Move() {
     this->setState(Moving);
};                     

void Entity::DoAction(AEntity entityAttacked) {
    this.Attack(entityAttacked);
};
