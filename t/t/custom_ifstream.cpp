#include "custom_ifstream.h"

custom_ifstream::custom_ifstream() : file(nullptr) {}

custom_ifstream::custom_ifstream(const std::string& filename) : file(nullptr)
{
    open(filename);
}

custom_ifstream::~custom_ifstream()
{
    close();
}

void custom_ifstream::open(const std::string& filename)
{
    if (file)
    {
        close();
    }


    fopen_s(&file, filename.c_str(), "r");
}


void custom_ifstream::close()
{
    if (file)
    {
        fclose(file);
        file = nullptr;
    }
}

custom_istream& custom_ifstream::operator>>(int& number)
{
    if (file)
    {
        fscanf_s(file, "%d", &number);
        buffer.push_back(number);
        pos++;
    }
    return *this;

}
