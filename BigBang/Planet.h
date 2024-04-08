#include <iostream>
#include <string>
#include <random>
#include <vector>

using namespace std;

class Planet
{
public:
	int id;

	int size;
	int gravity;

	string type;

	Planet(int id);

	void SetPlanetType(string newType);
};