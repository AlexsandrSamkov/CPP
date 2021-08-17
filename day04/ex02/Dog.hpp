#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(Dog const &dog);
    virtual ~Dog();
    virtual void makeSound() const;
    Dog &operator=(Dog const &dog);
    virtual std::string getType() const ;
private:
    Brain *_brain;
};
#endif