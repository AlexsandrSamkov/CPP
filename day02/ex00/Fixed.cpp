#include "Fixed.hpp"

Fixed::Fixed() {
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

void Fixed::setRawBits(const int raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed &Fixed::operator=(Fixed &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.getRawBits();
    return (*this);
}

Fixed::Fixed(Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.getRawBits();
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}