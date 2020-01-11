#include <iostream>
#include <time.h>
#include <cstdlib>
#include "Teupors.h"

Teupors::Teupors(){}

Teupors::~Teupors(){}


///+ ou -///

int Teupors::getTeuporsX()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireX(alea < 15 ? alea : 15);

	return positionAleatoireX;
}

int Teupors::getTeuporsY()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireY(alea < 15 ? alea : 15);

	return positionAleatoireY;
}

void Teupors::actionTeupors(){

}
