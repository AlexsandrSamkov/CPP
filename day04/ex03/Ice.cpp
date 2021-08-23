#include "Ice.hpp"

Ice::Ice() {
    _type = "ice";
}

Ice::Ice(const Ice &ice) {
    *this = ice;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &ice) {
    _type = ice.getType();
    return (*this);
}

AMateria *Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"\
    << std::endl;
}

