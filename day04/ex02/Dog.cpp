#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
    _brain = new Brain;
    std::cout << "** Dog default constructor called **" << std::endl;
}

Dog::Dog(const Dog &dog) {
    *this = dog;
    std::cout <<  "** Dog copy constructor called **" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "** Dog destructor called **" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)  {
    _type = dog._type;
    _brain = dog._brain;
    std::cout << "** Dog operator \"=\" called **" << std::endl;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof woof" << std::endl;
}

std::string Dog::getType() const {
    return (_type);
}