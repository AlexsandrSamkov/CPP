#include "WrongDog.hpp"

WrongDog::WrongDog() {
    _type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &wrongDog) {
    *this = wrongDog;
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destructor called" << std::endl;
}

void WrongDog::makeSound() const {
    std::cout << "WrongWoof WrongWoof" << std::endl;
}