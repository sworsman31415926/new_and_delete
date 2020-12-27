#include <iostream>
#include "world.h"

//Constructor to initialize all non-static variables
World::World(std::string name, int avgTemp, double avgDist, double day, double period, double tilt, bool life) {
	planetName = name;
	averageTemperature = avgTemp;
	averageDistance = avgDist;
	dayLength = day;
	orbitPeriod = period;
	axisTilt = tilt;
	intelligentLife = life;
}

//Default Constructor - Earth values
World::World() {
	planetName = "Earth";
	averageTemperature = 288;
	averageDistance = 1;
	dayLength = 1;
	orbitPeriod = 365.256;
	axisTilt = 23.5;
	intelligentLife = true;
}

World::~World() {
	std::cout << "\nDestruction sequence activated. Planet will be destroyed.";
}

//Print out data about the planet
void World::printPlanet() {
	std::cout << "Planet Name: " << planetName << std::endl;
	std::cout << "Average Temperature (K): " << averageTemperature << std::endl;
	std::cout << "Average Distance from Star (AU): " << averageDistance << std::endl;
	std::cout << "Length of Day (Earth days): " << dayLength << std::endl;
	std::cout << "Orbital Period (Earth days): " << orbitPeriod << std::endl;
	std::cout << "Axis Tilt (deg): " << axisTilt << std::endl;

	if (intelligentLife == 1) {	
		std::cout << "Intelligent life: " << "yes" << std::endl;
	} else {
		std::cout << "Intelligent life: " << "no" << std::endl;
	}
}