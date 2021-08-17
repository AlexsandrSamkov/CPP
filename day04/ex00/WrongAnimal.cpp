#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    _type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
    _type = wrongAnimal.getType();
    return (*this);
}

std::string WrongAnimal::getType() const {
    return (_type);
}

void WrongAnimal::makeSound() const{
    std::cout << "Wrong Mute" << std::endl;
}
