#include "Universe.h"

Universe::Universe(int universeSize) {
	srand(static_cast<unsigned int>(time(nullptr)));
	for (int i = 0; i < universeSize; i++) {
		planets.push_back(make_unique<Planet>(i+1));
		
		int rate = rand() % 101;

		if (telluricRate + gasRate + deadRate == 100) {
			if (rate < telluricRate) {
				planets[i]->SetPlanetType("Telluric");
				planets[i]->size = rand() % 5500 + 2500;
				planets[i]->gravity = rand() % 7 + 3;
			}
			else if (rate < gasRate + telluricRate){
				planets[i]->SetPlanetType("Gas");
				planets[i]->size = rand() % 40000 + 50000;
				planets[i]->gravity = rand() % 9 + 3;
			}
			else if (rate < deadRate + gasRate + telluricRate){
				planets[i]->SetPlanetType("Dead");
				planets[i]->size = rand() % 3000 + 2000;
				planets[i]->gravity = rand() % 15 + 9;
			}
		}
		else {
			cout << "ERROR: Total percent isn't 100% !";
		}
	}
}

void Universe::PrintUniverse(){
	for (int i = 0; i < planets.size(); i++) {
		cout << "----------------------------------------------------------------------------------------------------------" << endl;
		cout << "Planet " << planets[i]->id << ": Type = " << planets[i]->type << " | Size = " << planets[i]->size << "km | Gravity = "<< planets[i]->gravity << "m/s" << endl;
	}
}