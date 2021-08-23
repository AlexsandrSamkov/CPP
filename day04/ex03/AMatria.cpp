#include "AMatria.hpp"

AMateria::AMateria() {
    _type = "(null)";
}

AMateria::AMateria(const std::string &type) : _type(type) {
}

AMateria::AMateria(const AMateria &aMateria) {
    *this = aMateria;
}

AMateria::~AMateria() {
    int a = 1;
    a = 2;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
    _type = aMateria.getType();
    return *this;
}

const std::string &AMateria::getType() const {
    return (_type);
}

void AMateria::use(ICharacter &target) {
    (void)target;
}

