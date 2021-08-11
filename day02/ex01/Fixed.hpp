#ifndef FIXED_HPP
# define FIXED_HPP
# include <cmath>
# include <iostream>

class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &fixed );
    Fixed(const int value);
    Fixed(const float value);
    int toInt() const;
    float toFloat() const;
    Fixed &operator=(Fixed const &fixed);
private:
    int value;
    static const int bits = 8;
};
std::ostream& operator<<(std::ostream& output, const Fixed& obj);
#endif