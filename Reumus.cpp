#include <iostream>
#include <time.h>
#include <cstdlib>

#include "Reumus.h"

Reumus::Reumus(){}

Reumus::~Reumus(){}


///X///

int Reumus::getReumusX()
{
	int positionAleatoireX(rand() % 16 + 1);

	return positionAleatoireX;
}

int Reumus::getReumusY()
{
	int positionAleatoireY(rand() % 16 + 1);

	return positionAleatoireY;
}

void Reumus::actionReumus(){

}
