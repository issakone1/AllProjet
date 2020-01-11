#include <iostream>
#include <time.h>
#include <cstdlib>


#include "Diams.h"

Diams::Diams(){}

Diams::~Diams(){}

///$///

int Diams::getDiamsX()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireX(alea < 15 ? alea : 15);

	return positionAleatoireX;
}

int Diams::getDiamsY()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireY(alea < 15 ? alea : 15);

	return positionAleatoireY;
}

void Diams::actionDiams(){

}
