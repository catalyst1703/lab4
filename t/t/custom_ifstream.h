#ifndef CUSTOM_IFSTREAM

#include "custom_istream.h"
#include <string>
#include "FileModeIn.h"

class custom_ifstream : public custom_istream
{
public:
    custom_ifstream();
    custom_ifstream(const std::string& filename);
    ~custom_ifstream();

    void open(const std::string& filename);
    void close();
    custom_istream& operator >>(int& number) override;

private:
    FILE* file;
};

#endif // !CUSTOM_IFSTREAM


