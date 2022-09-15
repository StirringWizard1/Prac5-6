#include "MapGeneric.h"
#include <vector>


std::vector <int> MapGeneric::map(std::vector<int> myvec) 
{
	int hi =  myvec.size(); 

	if (pos >= hi)
	{
		 return myvec;
	}
	
	
	myvec.at(pos)=f(myvec.at(pos)) ;
	pos++; 

	return map(myvec); 

}
