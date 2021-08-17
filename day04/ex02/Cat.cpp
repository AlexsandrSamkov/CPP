#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    _brain = new Brain;
    std::cout << "** Cat default constructor called **" << std::endl;
}

Cat::Cat(const Cat &cat)  : Animal(cat) {
    *this = cat;
    std::cout <<  "** Cat copy constructor called **" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "** Cat destructor called **" << std::endl;
}

Cat &Cat::operator=(Cat const &cat) {
    _type = cat._type;
    _brain = cat._brain;
    std::cout << "** Cat operator \"=\" called **" << std::endl;
    return (*this);
}

std::string Cat::getType() const {
    return (_type);
}

void Cat::makeSound() const {
    std::cout << "Meow meow" << std::endl;
}