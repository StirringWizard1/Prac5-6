#include "FilterGeneric.h"
#include "FilterForTwoDigitPositive.h"



int FilterForTwoDigitPositive::g(int x)
{
	if (x <= 99 && x >= 10)
	{
		return true;
	}
	
	return false;
}