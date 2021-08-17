#include "Dog.hpp"

Dog::Dog() {
    _type = "Dog";
}

Dog::Dog(const Dog &dog) {
    *this = dog;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof woof" << std::endl;
}