#include "Fixed.hpp"

Fixed::Fixed(void) {
    std::cout << "Constructor called." << std::endl;
    fixInt = 0;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(const Fixed &o) {

}

int    Fixed::getRawBits(void) {
    return (fixInt);
}

void    Fixed::setRawBits(int i) {
    fixInt = i;
}

