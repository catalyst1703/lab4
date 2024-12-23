#ifndef CUSTOM_CONSOLE_OSTREAM
#define CUSTOM_CONSOLE_OSTREAM

#include "custom_ostream.h"

class custom_console_ostream : public custom_ostream
{
public:
    custom_console_ostream();
    ~custom_console_ostream();

    custom_ostream& operator<<(const int& number) override;
};

#endif // !CUSTOM_OFSTREAM


