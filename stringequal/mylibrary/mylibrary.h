#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <string>
#include <cctype>

class MyLibrary {
public:
    void ignoreCap(std::string& first_str, std::string& second_str);
    int returnNegValue();
    int returnPosValue();
    int returnZero();
};

#endif 
