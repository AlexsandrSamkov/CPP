#include "Fixed.hpp"

Fixed::Fixed() {
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = value << Fixed::bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(value * (float)(1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = fixed.value;
}

Fixed &Fixed::operator=(Fixed const &fixed) {
    std::cout << "Assignation operator called" << std::endl;
    this->value = fixed.value;
    return (*this);
}

float Fixed::toFloat() const
{
    return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt() const
{
    return (this->value >> Fixed::bits);
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}