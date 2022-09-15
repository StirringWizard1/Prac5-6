#include "ReduceGeneric.h"
#include <vector>
#include <iostream>

int ReduceGeneric::reduce(std::vector<int> myvec) 
{
	int hi =  myvec.size(); 

	if (pos >= hi)
	{
		 return myvec.at(pos-1);
	}
	
	myvec.at(pos) = binaryOperator (myvec.at(pos-1 ), myvec.at(pos));
	 
	pos++;
	return reduce(myvec); 

}

