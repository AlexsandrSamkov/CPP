#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP
# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
public:
    WrongDog();
    WrongDog(WrongDog const &wrongDog);
    virtual ~WrongDog();
    virtual void makeSound() const;
};
#endif