#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed {
public:
/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/
    Fixed();
    ~Fixed();
    Fixed(Fixed const &fixed );
    Fixed(const int value);
    Fixed(const float value);
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
    Fixed &operator=(Fixed const &fixed);
    Fixed operator+(Fixed const &fixed);
    Fixed operator-(Fixed const &fixed);
    Fixed operator*(Fixed const &fixed);
    Fixed operator/(Fixed const &fixed);
    bool operator==(Fixed const &fixed) const;
    bool operator!=(Fixed const &fixed) const;
    bool operator<=(Fixed const &fixed) const;
    bool operator>=(Fixed const &fixed) const;
    bool operator>(Fixed const &fixed) const;
    bool operator<(Fixed const &fixed) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
int getRawBits() const ;
void setRawBits(const int raw);
int toInt() const;
float toFloat() const;
private:
    int value;
    static const int bits = 8;
};
std::ostream& operator<<(std::ostream& output, const Fixed& obj);
#endif