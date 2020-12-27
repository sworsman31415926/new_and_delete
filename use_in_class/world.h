#ifndef WORLD_H
#define WORLD_H
#include <string>

class World {
	std::string planetName;
	int averageTemperature;//Kelvin
	double averageDistance;//AU
	double dayLength;//Earth days
	double orbitPeriod;//Earth days
	double axisTilt;//Degrees
	bool intelligentLife;//Is there intelligent life?

	public:
		World(std::string name, int avgTemp, double avgDist, double day, double period, double tilt, bool life);//Constructor to initialize all non-static variables
		World();//Default constructor - Sets Earth values
		~World();//Destructor
		
		void printPlanet();
};

#endif