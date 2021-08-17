#include "FragTrap.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/

FragTrap::FragTrap() {
    _name = "(null)";
    _hitpoints = 100;
    _enegryPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) {
    _name = name;
    _hitpoints = 100;
    _enegryPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
    *this = fragTrap;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called." << std::endl;
}

/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
    _name = fragTrap.getName();
    _hitpoints = fragTrap.getEnergyPoints();
    _enegryPoints = fragTrap.getEnergyPoints();
    _attackDamage = fragTrap.getAttackDamage();
    std::cout << "FragTrap overloading = called" << std::endl;
    return *this;
}

/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/

void FragTrap::attack(const std::string &target) {
    std::cout << "FragTrap " << _name  << " attack " << target\
    << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamge(unsigned int amount) {
    unsigned int tmpAmount = amount;
    while (tmpAmount > 0 && _hitpoints > 0) {
        tmpAmount--;
        _hitpoints--;
    }
    std::cout << "FragTrap " << _name << " received " << amount <<\
    " damage. ";
    _hitpoints != 0 ? std::cout << "He has " << _hitpoints <<\
    " hit points left" : std::cout << "He dead.";
    std::cout << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;
    std::cout << "FragTrap " << _name <<  " was repaired. " <<\
    "He has " << _hitpoints << " hit points." << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << _name << " FragTrap high fives request." << std::endl;
}