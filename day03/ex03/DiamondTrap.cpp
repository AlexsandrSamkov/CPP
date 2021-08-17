#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    _name = "(null)";
    _clap_name = _name + " _clap_name";
    _hitpoints = this->FragTrap::_hitpoints;
    _enegryPoints = this->ScavTrap::_enegryPoints;
    _attackDamage = this->FragTrap::_attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
    _name = name;
    _clap_name = _name + " _clap_name";
    _hitpoints = this->FragTrap::_hitpoints;
    _enegryPoints = this->ScavTrap::_enegryPoints;
    _attackDamage = this->FragTrap::_attackDamage;
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
    *this = diamondTrap;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called." << std::endl;
}

/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
    _name = diamondTrap.getName();
    _hitpoints = diamondTrap.getEnergyPoints();
    _enegryPoints = diamondTrap.getEnergyPoints();
    _attackDamage = diamondTrap.getAttackDamage();
    std::cout << "DiamondTrap overloading = called" << std::endl;
    return *this;
}

/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/

void DiamondTrap::attack(const std::string &target)  {
    this->ScavTrap::attack(target);
}

void DiamondTrap::takeDamge(unsigned int amount) {
    unsigned int tmpAmount = amount;
    while (tmpAmount > 0 && _hitpoints > 0) {
        tmpAmount--;
        _hitpoints--;
    }
    std::cout << "DiamondTrap " << _name << " received " << amount <<\
    " damage. ";
    _hitpoints != 0 ? std::cout << "He has " << _hitpoints <<\
    " hit points left" : std::cout << "He dead.";
    std::cout << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;
    std::cout << "DiamondTrap " << _name <<  " was repaired. " <<\
    "He has " << _hitpoints << " hit points." << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << _clap_name << "." << std::endl;
}