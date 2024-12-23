#include "custom_console_istream.h"

custom_console_istream::custom_console_istream()
{
}

custom_console_istream::~custom_console_istream()
{
}

custom_istream& custom_console_istream::operator>>(int& number)
{
	scanf_s("%d", &number);
	return *this;
}


