#include "Animal.hpp"

Animal::Animal() {
    _type = "Animal";
}

Animal::Animal(const Animal &animal) {
    *this = animal;
}

Animal::~Animal() {
    std::cout << "** Animal destructor called **" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
   _type = animal.getType();
    return (*this);
}

std::string Animal::getType() const {
    return (_type);
}


void Animal::makeSound() const{
    std::cout << "Mute" << std::endl;
}

