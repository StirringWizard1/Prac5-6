#include "FilterGeneric.h"
#include "FilterOdd.h"
#include <vector>
#include <iostream>


int FilterOdd::g(int x)
{

	if (x%2 == 0)
	{

		return false;
		
	}
	
	return true;
}