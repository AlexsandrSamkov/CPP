#include "Fixed.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/

Fixed::Fixed() {
    this->setRawBits(0);
}

Fixed::Fixed(const int value) {
    this->setRawBits(value << Fixed::bits);
}

Fixed::Fixed(const float value) {
    this->setRawBits((int)roundf(value * (1 << Fixed::bits)));
}

Fixed::Fixed(Fixed const &fixed) {
    this->setRawBits(fixed.getRawBits());
}

/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/

Fixed &Fixed::operator=(Fixed const &fixed) {
    this->value = fixed.value;
    return (*this);
}

bool Fixed::operator==(Fixed const &fixed) const{
    return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(Fixed const &fixed) const{
    return (this->getRawBits() != fixed.getRawBits());
}

bool Fixed::operator<=(Fixed const &fixed) const {
    return (this->getRawBits() <= fixed.getRawBits());
}
bool Fixed::operator>=(Fixed const &fixed) const{
    return (this->getRawBits() >= fixed.getRawBits());
}
bool Fixed::operator>(Fixed const &fixed) const {
    return (this->getRawBits() > fixed.getRawBits());
}
bool Fixed::operator<(Fixed const &fixed) const {
    return (this->getRawBits() < fixed.getRawBits());
}

Fixed Fixed::operator++() {
    this->value++;
    return(*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}
Fixed Fixed::operator--(){
    this->value--;
    return(*this);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed Fixed::operator+(const Fixed &fixed) {
    Fixed ret = (this->getRawBits() + fixed.getRawBits());
    return (ret);
}

Fixed Fixed::operator-(const Fixed &fixed) {
    Fixed ret = (this->getRawBits() + fixed.getRawBits());
    return (ret);
}

Fixed Fixed::operator*(const Fixed &fixed) {
    Fixed ret = Fixed(this->toFloat() * fixed.toFloat());
    return (ret);
}

Fixed Fixed::operator/(const Fixed &fixed) {
    Fixed ret(this->toFloat() / fixed.toFloat());
    return (ret);
}

/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

float Fixed::toFloat() const
{
    return (float)this->value / (float)(1 << Fixed::bits);
}

int Fixed::getRawBits() const {
    return (this->value);
}

void Fixed::setRawBits(const int raw) {
    this->value = raw;
}

int Fixed::toInt() const
{
    return (this->value >> Fixed::bits);
}

Fixed::~Fixed() {
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
    output << fixed.toFloat();
    return (output);
}