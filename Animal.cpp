#include "Animal.h"
#include<iosteam>

using namespace std;


Animal::Animal() 
{ this->name = " ";
  this->energy = 0;
  this->power = 0;
  this->size = 0;
  this->weight = 0;
  this->point = new Point2D();
  this->state = State.Unknown;
}

Animal::Animal(string name,double energy,double power,double size,double weight,Point2D point,State state) : Entity(name, energy, power, size, weight, point, state);
{                
}                   

void Animal::Eat(){
     this->setState(Eating);
 }
 
void Animal::Sleep(){
     this->setState(Sleeping);     
 } 

void Animal::SearchingForFood(){
     this->setState(SearchingForFood);     
 }  
     
