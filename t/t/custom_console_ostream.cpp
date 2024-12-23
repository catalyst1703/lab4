#include "custom_console_ostream.h"

custom_console_ostream::custom_console_ostream()
{
}

custom_console_ostream::~custom_console_ostream()
{
}


custom_ostream& custom_console_ostream::operator<<(const int& number)
{
	printf("%d",number);
	return *this;
}
