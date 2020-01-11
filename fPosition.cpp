#include <iostream>
#include <time.h>
#include <cstdlib>

#include "fPosition.h"

int fPositionX()
{
	int positionAleatoireX(rand() % 20 + 0);

	return positionAleatoireX;
}

int fPositionY()
{
	int positionAleatoireY(rand() % 20 + 0);

	return positionAleatoireY;
}
