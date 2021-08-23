#include "Character.hpp"

Character::Character() {
    _name = "(null)";
}

Character::Character(const std::string &name) {
    _name = name;
    for (int i = 0; i < SIZE_TRASH; i++)
        _trash[i] = nullptr;
    for (int i = 0; i < SIZE_INVETORY; i++)
        _inventory[i] = nullptr;
}

Character &Character::operator=(Character const &character) {
    _name = character.getName();
    for (int i = 0; i < SIZE_INVETORY; i++)
        if (character._inventory[i] != nullptr) {
            _inventory[i] = character._inventory[i]->clone();
        } else {
            _inventory[i] = nullptr;
        }
    for (int i = 0; i < SIZE_TRASH; i++)
        if (character._trash[i] != nullptr) {
            _trash[i] = character._trash[i]->clone();
        } else {
            _trash[i] = nullptr;
        }
    return *this;
}

Character::Character(const Character &characters) {
    *this = characters;
}

Character::Character(const ICharacter &characters) {
    *this = characters;
}

Character::~Character() {
    for (int i = 0; i < SIZE_INVETORY; i++)
        delete _inventory[i];
    for (int i = 0; i < SIZE_TRASH; i++)
        delete _trash[i];
}

const std::string &Character::getName() const {
    return (_name);
}

AMateria const *Character::getInventory0() const {
    return _inventory[0];
}

AMateria const *Character::getInventory1() const {
    return _inventory[1];
}

AMateria const *Character::getInventory2() const {
    return _inventory[2];
}

AMateria const *Character::getInventory3() const {
    return _inventory[3];
}

void Character::equip(AMateria *m) {
    int i = 0;
    while (i < SIZE_INVETORY) {
        if (_inventory[i] == nullptr)
            break;
        i++;
    }
    if (i < SIZE_INVETORY && m != nullptr)
        _inventory[i] = m;
    if (i == SIZE_INVETORY)
    {
        std::cout << "Invetory full." << std::endl;
        delete m;
    }
    if (m == nullptr)
        std::cout << "Not materia." << std::endl;
}

void Character::unequip(int idx) {
    if (idx > -1 && idx < 4) {
        delete _inventory[idx];
        _inventory[idx] = nullptr;
    } else {
        std::cout << "Invalid index" << std::endl;
    }

}

void Character::use(int idx, ICharacter &target) {
    if (idx > -1 && idx < 4)
        _inventory[idx]->use(target);
    else
        std::cout << "Invalid index" << std::endl;

}

std::ostream &operator<<(std::ostream &output,Character const &character) {
    output << "Name: " << character.getName() << ". Inventory :" <<\
    "| " << (character.getInventory0() != nullptr ?\
    character.getInventory0()->getType() : "----")  <<\
    " | " << (character.getInventory1() != nullptr ?\
    character.getInventory1()->getType() : "----")  <<\
    " | " << (character.getInventory2() != nullptr ?\
    character.getInventory2()->getType() : "----")  <<\
    " | " << (character.getInventory3() != nullptr ?\
    character.getInventory3()->getType() : "----")  << " |";
    return output;
}