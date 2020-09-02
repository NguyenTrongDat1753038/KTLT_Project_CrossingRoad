#include "Header.h"

Level::Level(int lane, int distance, int speed, int car, int struck, int bird, int dinasour) {
	this->lane = lane; this->speed = speed; this->car = car; this->truck = struck;
	this->bird = bird; this->dina = dinasour; this->distance = distance;
}

int Level::getLane() { 
	return lane; 
}

int Level::getDistance() { 
	return distance; 
}

int Level::getSpeed() { 
	return speed; 
}

int Level::AmounrOfBird() { 
	return bird; 
}

int Level::AmountOfCar() { 
	return car; 
}

int Level::AmountOfDinasour() { 
	return dina; 
}

int Level::AmountOfTruck() { 
	return truck; 
}