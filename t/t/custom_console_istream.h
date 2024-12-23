#ifndef CUSTOM_CONSOLE_ISTREAM
#define CUSTOM_CONSOLE_ISTREAM

#include "custom_istream.h"

class custom_console_istream : public custom_istream
{
public:
    custom_console_istream();
    ~custom_console_istream();

    custom_istream& operator >>(int& number) override;
};

#endif // !CUSTOM_OFSTREAM


