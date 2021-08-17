#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(WrongCat const &wrongCat);
    virtual ~WrongCat();
    virtual void makeSound() const;
};
#endif