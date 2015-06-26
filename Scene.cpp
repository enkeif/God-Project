#include "Scene.h"
#include "Planet.h"
#include<iostream>

using namespace std;

Scene::Scene() {
	
}

void Scene::createPlanets()
{
	planet.push_back(new Planet(name));
}


void Scene::erasePopulation()
{
for (int i = 0; i < planet.size(); i++)
	{
		if (planet[i]->getName() == planetName.data())
		{
			planet[i]->erasePopulation();  //vzima go ot planet.cpp
			cout << "Iztri naselenieto na planetata \n";
			cout << "\n";
		}
		else
			cout << "Nqma takava planeta\n";
	}
}

void Scene::destroyPlanet()
{
	check();
	for (unsigned int i = 0; i < planet.size(); i++)
	{
		if (planet[i]->getName() == planetName.data())
		{
			planet.erase(planet.cbegin() + i);
			std::cout << "Iztri planeta\n";
			std::cout << "\n";
		}
		else
			std::cout << "Nqma takava planeta\n";
	}

}

void Scene::addEntity()
{
	
	for (int i = 0; i < planet.size(); i++)
	{

		if (planet[i]->getName() == planetName)
		{
				planet[i]->addPopulation(e, number);

		}
	}
	
}

Scene::~Scene()
{
	while (!planet.empty())
	{
		delete planet.back();
		planet.pop_back();
	}
}
