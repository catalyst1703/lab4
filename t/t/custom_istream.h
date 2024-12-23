#ifndef CUSTOM_ISTREAM_H
#define CUSTOM_ISTREAM_H
#include "custom_vector.h"
#include <vector>
class custom_istream
{
public:
	bool eof();
	virtual custom_istream& operator >>(int& number) = 0;
protected:
	int pos;
#ifndef USE_STL
	custom_vector<int> buffer;
#else
	std::vector<int> buffer;
#endif // USE_STL

};

#endif // !CUSTOM_ISTREAM_H



