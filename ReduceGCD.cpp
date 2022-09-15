#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include <math.h>



int ReduceGCD::binaryOperator(int x, int y)
{

	int small=0;
	int large=0;
	int GCD=0;
	int T1 = abs(x);
	int T2 = abs(y);
	GCD = small +large;

	if( T1<T2)
	{
		large = T2;
		small = T1;
	}
	else if (T1 > T2)
	{
		large =T1;
		small = T2;
	}
	else if (T1 == T2)
	{

		return T1;
	}

	
	for (int i = 1; i <= small; i++)
	{
		if (small%i==0 && large%i == 0)
			{

				GCD = i;
			}
	}

	return GCD;


}