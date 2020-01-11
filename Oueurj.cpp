#include <iostream>
#include <time.h>
#include <cstdlib>

#include "Oueurj.h"

Oueurj::Oueurj(){}

Oueurj::~Oueurj(){}


///J///

int Oueurj::getOueurjX()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireX(alea < 15 ? alea : 15);

	return positionAleatoireX;
}

int Oueurj::getOueurjY()
{
    int alea = rand() % 14 + 1;
	int positionAleatoireY(alea < 15 ? alea : 15);

	return positionAleatoireY;
}

void Oueurj::actionOueurj(){

}
