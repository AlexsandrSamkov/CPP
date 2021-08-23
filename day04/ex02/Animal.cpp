#include "Animal.hpp"

Animal::Animal() {
    _type = "(null)";
    std::cout <<  "** Animal default constructor called **" << std::endl;
}

Animal::Animal(const Animal &animal) {
    std::cout <<  "** Animal copy constructor called **" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    _type = animal.getType();
    std::cout << "** Animal operator \"=\" called **" << std::endl;
    return (*this);
}

Animal::~Animal() {}
