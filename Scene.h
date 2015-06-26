#ifndef SCENE_H
#define SCENE_H

#include "Planet.h"
#include<vector>

class Scene
{
private:
	vector<Planet*> planets;

public:
  Scene();
  Scene(Planet* p);
	void createEntity(EntityType creature, Planet p);
	~Scene();
};

#endif
