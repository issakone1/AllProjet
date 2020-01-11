#include <iostream>
#include <time.h>
#include <cstdlib>

#include "Geurchars.h"

Geurchars::Geurchars(){}

Geurchars::~Geurchars(){}

///*///

int Geurchars::getGeurcharsX()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireX(alea < 15 ? alea : 15);

	return positionAleatoireX;
}

int Geurchars::getGeurcharsY()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireY(alea < 15 ? alea : 15);

	return positionAleatoireY;
}

void Geurchars::actionGeurchars(){

}
