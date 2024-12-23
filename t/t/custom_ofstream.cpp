#include "custom_ofstream.h"
#include <stdexcept>

custom_ofstream::custom_ofstream() : file(nullptr) {}

custom_ofstream::custom_ofstream(const std::string& filename, FileModeIn mode) : file(nullptr)
{
    open(filename, mode);
}

custom_ofstream::~custom_ofstream()
{
    close();
}

void custom_ofstream::open(const std::string& filename, FileModeIn mode)
{
    if (file)
    {
        close();
    }

    const char* modeStr = nullptr;
    switch (mode) {
    case FileModeIn::Write:
        modeStr = "w";
        break;
    case FileModeIn::Append:
        modeStr = "a";
        break;
    }

    fopen_s(&file, filename.c_str(), modeStr);
}


void custom_ofstream::close()
{
    if (file)
    {
        fclose(file);
        file = nullptr;
    }
}

custom_ostream& custom_ofstream::operator << (const int& number)
{
    if (file)
    {
        buffer.push_back(number);
        pos++;
        std::string res = std::to_string(number) + "\t";
        fprintf(file,"%s", res.c_str());
    }
    return *this;

}
