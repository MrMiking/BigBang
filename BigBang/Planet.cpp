#include "Planet.h"

Planet::Planet(int value) {
    this->id = value;
}

void Planet::SetPlanetType(string newType) {
    type = newType;
}