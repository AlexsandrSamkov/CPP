#include "Cure.hpp"

Cure::Cure() {
    _type = "cure";
}

Cure::Cure(const Cure &cure) {
    *this = cure;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &cure) {
    _type = cure.getType();
    return *this;
}

AMateria *Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "’s wounds *"\
    << std::endl;
}

