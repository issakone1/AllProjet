#include <iostream>
#include <time.h> //nombre aleatoire
#include <cstdlib> //nombre aleatoire

#include "sPosition.h"

int sPositionX()
{
	int positionAleatoireX(rand() % 20 + 0);

	return positionAleatoireX;
}

int sPositionY()
{
	int positionAleatoireY(rand() % 20 + 0);

	return positionAleatoireY;
}
