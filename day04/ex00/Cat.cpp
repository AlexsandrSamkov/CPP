#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat)  : Animal(cat) {
    *this = cat;
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}