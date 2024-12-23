#ifndef CUSTOM_OFSTREAM

#include "custom_ostream.h"
#include <string>
#include "FileModeIn.h"

class custom_ofstream : public custom_ostream
{
public:
    custom_ofstream();
    custom_ofstream(const std::string& filename, FileModeIn mode = Write);
    ~custom_ofstream();

    void open(const std::string& filename, FileModeIn mode = Write);
    void close();
    custom_ostream& operator<<( const int& number) override;

private:
    FILE* file;
};

#endif // !CUSTOM_OFSTREAM


