#ifndef CURE_HPP
# define CURE_HPP
# include "AMatria.hpp"
# include <iostream>
class Cure : public AMateria {
public:
    Cure();
    Cure(Cure const &cure);
    ~Cure();
    Cure &operator=(Cure const &cure);
    AMateria* clone() const;
    void use(ICharacter &target);
};
#endif