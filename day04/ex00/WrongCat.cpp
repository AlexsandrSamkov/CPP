#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)  : WrongAnimal(wrongCat) {
    *this = wrongCat;
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow WrongMeow" << std::endl;
}