#include <iostream>
#include <time.h> //nombre aleatoire
#include <cstdlib> //nombre aleatoire

#include "mPosition.h"

using namespace std;

int mPositionX()
{
	int positionAleatoireX(rand() % 20 + 0);

	return positionAleatoireX;
}

int mPositionY()
{
	int positionAleatoireY(rand() % 20 + 0);

	return positionAleatoireY;
}
