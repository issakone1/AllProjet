#include <iostream>
#include <time.h>
#include <cstdlib>

#include "Streumons.h"
//#include "Plateau.h"

Streumons::Streumons(){}

Streumons::~Streumons(){}


///s///

int Streumons::getStreumonsX()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireX(alea < 15 ? alea : 15);

	return positionAleatoireX;
}

int Streumons::getStreumonsY()
{
	int alea = rand() % 14 + 1;
	int positionAleatoireY(alea < 15 ? alea : 15);

	return positionAleatoireY;
}

void Streumons::actionStreumons(){

}
