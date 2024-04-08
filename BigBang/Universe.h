#include "Planet.h"

#pragma once
class Universe
{
public:
	vector<unique_ptr<Planet>> planets;

	int telluricRate = 20;
	int gasRate = 60;
	int deadRate = 20;

	Universe(int universeSize);

	void PrintUniverse();
};

