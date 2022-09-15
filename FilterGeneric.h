#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>



class FilterGeneric 
{
private: 
	virtual int g(int x) = 0; 
	int pos=0;
	
public: 

	std::vector<int> filter(std::vector<int>); 
	
};
#endif