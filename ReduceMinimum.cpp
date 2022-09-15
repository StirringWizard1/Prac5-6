#include "ReduceGeneric.h"
#include "ReduceMinimum.h"


int ReduceMinimum::binaryOperator(int x, int y)
{

	if (x < y)
	{
		
		return x;
	}
	return y;
}