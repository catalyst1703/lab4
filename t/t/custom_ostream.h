#pragma once
#include "custom_vector.h"
#include <vector>
class custom_ostream
{
public:
	virtual custom_ostream& operator <<(const int& value) = 0;
protected:
	int pos;
#ifndef USE_STL
	custom_vector<int> buffer;
#else
	std::vector<int> buffer;
#endif // USE_STL
	

};


