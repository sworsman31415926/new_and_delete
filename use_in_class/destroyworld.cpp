#include <iostream>
#include "world.h"

int main() {

	std::string planetChoice;

	std::cout << "What planet would you like to learn about? Enter the number corresponding to your choice.\n1 - Mercury\n2 - Venus\n3 - Earth\n4 - Mars\n5 - Jupiter\n6 - Saturn\n7 - Uranus\n8 - Neptune\n" << std::endl;
	std::cin >> planetChoice;
	
	if (planetChoice == "1") {
		World *mercury = new World("Mercury", 440, 0.39, 58.7, 87.96, 0, false);
		std::cout << &mercury << std::endl;
		mercury->printPlanet();
		delete mercury;
		std::cout << &mercury << std::endl;
	} else if (planetChoice == "2") {
		World *venus = new World("Venus", 735, 0.723, 243, 224.68, 177.4, false);
		venus->printPlanet();
		delete venus;
	} else if (planetChoice == "3") {
		World *earth = new World();
		earth->printPlanet();
		delete earth;
	} else if (planetChoice == "4") {
		World *mars = new World("Mars", 218, 1.524, 1.026, 686.98, 25.2, false);
		mars->printPlanet();
		delete mars;
	} else if (planetChoice == "5") {
		World *jupiter = new World("Jupiter", 385, 5.203, 0.41, 4329.63, 3.1, false);
		jupiter->printPlanet();
		delete jupiter;
	} else if (planetChoice == "6") {
		World *saturn = new World("Saturn", 415, 9.539, 0.425, 10751.44, 26.7, false);
		saturn->printPlanet();
		delete saturn;
	} else if (planetChoice == "7") {
		World *uranus = new World("Uranus", 49, 19.18, 0.746, 30685.55, 97.8, false);
		uranus->printPlanet();
		delete uranus;
	} else if (planetChoice == "8") {
		World *neptune = new World("Neptune", 473, 30.06, 0.796, 60155.65, 122.53, false);
		neptune->printPlanet();
		delete neptune;
	} else if (planetChoice == "9") {
		std::cout << "Sorry, Pluto is only a dwarf planet. Destruction sequence initiated. Goodbye.";
	} else {
		std::cout << "Invalid input. Destruction sequence initiated. Goodbye.";
	}

	return 0;
}