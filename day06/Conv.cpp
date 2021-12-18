#include "Conv.hpp"

Conv::Conv(const std::string &in) : _in(in) {}

Conv::~Conv() {}


bool    Conv::isZ() {
    for (size_t y = 0; y < _in.size(); ++y) {
        if (y == 0 && (_in[y] == '-' || _in[y] == '+'))
            continue;
        if (_in[y] != '0' && _in[y] != '.')
            return false;
    }
    return true;
}

/*
bool Conv::isInt() {
    for (size_t y = 0; y < _in.size(); ++y) {
        if (y == 0 && (_in[y] == '-' || _in[y] == '+'))
            continue;
        if (!isdigit(_in[y]))
            return false;
    }
    return true;
}

bool Conv::isFloat() {
    if (_in[_in.size() - 1] == 'f') {
        for (size_t i = 0; i < _in.size(); ++i) {
            if (i == 0 && (_in[i] == '-' || _in[i] == '+'))
                continue;
            if (isdigit(_in[i]))
                continue;
            if (_in.at(i) == '.')
                return true;
        }
    }
    return false;
}

bool Conv::isDouble() {
    if (_in[_in.size() - 1] != 'f') {
        for (size_t i = 0; i < _in.size(); ++i) {
            if (i == 0 && (_in[i] == '-' || _in[i] == '+'))
                continue;
            if (isdigit(_in[i]))
                continue;
            if (_in.at(i) == '.')
                return true;
        }
    }
    return false;
}*/