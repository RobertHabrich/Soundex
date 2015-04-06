#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

class Soundex
{
public:
    std::string encode(const std::string& word) const;
};

#endif // SOUNDEX_H
