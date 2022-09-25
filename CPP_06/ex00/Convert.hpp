#ifndef CPP_PISCINE_CONVERT_HPP
#define CPP_PISCINE_CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Convert
{
private:
    int         _dot;
    int         _count;
    int         _fl;
    std::string _arg;
    Convert();
    int isAlNum(std::string arg);

public:
    Convert(std::string arg);
    ~Convert();
    Convert(const Convert & copy);
    Convert & operator= (const Convert & right);

    void converted();
};


#endif //CPP_PISCINE_CONVERT_HPP
