#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H


#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric
{
private: 
	virtual int g(int x);
public:

};
#endif
