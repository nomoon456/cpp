#ifndef CONV_HPP
#define CONV_HPP

#include <string>
#include <iostream>
#include <cmath>

class Conv {
    public:
        Conv(const std::string &in);
        ~Conv();
        void    Parse();
        bool    Check();
        bool    isInt();
        bool    isDouble();
        bool    isFloat();
        bool    isZ();
    private:
        std::string _in;
};

#endif