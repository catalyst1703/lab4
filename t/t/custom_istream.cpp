#include "custom_istream.h"

bool custom_istream::eof()
{
	return pos >= buffer.size();
}
