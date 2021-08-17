#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal {
public:
    virtual ~Animal() = 0;
    virtual std::string getType() const = 0;
    virtual void makeSound() const = 0;
protected:
    std::string _type;
};
#endif