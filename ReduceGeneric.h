#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>



class ReduceGeneric 
{
private: 
	virtual int binaryOperator(int x,int y) = 0; 
	int pos=1;
	
public: 

	int reduce(std::vector<int>); 

	
};
#endif