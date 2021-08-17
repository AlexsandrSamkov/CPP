#include "ScavTrap.hpp"

/******************************************************************************/
/*                       CONSTRUCTORS AND DESTRUCTORS                         */
/******************************************************************************/

ScavTrap::ScavTrap() {
    _name = "(null)";
    _attackDamage = 0;
    _enegryPoints = 10;
    _hitpoints = 10;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
    *this = scavTrap;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) {
    _name = name;
    _attackDamage = 20;
    _enegryPoints = 50;
    _hitpoints = 100;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called." << std::endl;
}
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
    _name = scavTrap.getName();
    _hitpoints = scavTrap.getEnergyPoints();
    _enegryPoints = scavTrap.getEnergyPoints();
    _attackDamage = scavTrap.getAttackDamage();
    std::cout << "ScavTrap overloading = called" << std::endl;
    return (*this);
}
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/


void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << _name  << " attack " << target\
    << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamge(unsigned int amount) {
    unsigned int tmpAmount = amount;
    while (tmpAmount > 0 && _hitpoints > 0) {
        tmpAmount--;
        _hitpoints--;
    }
    std::cout << "ScavTrap " << _name << " received " << amount <<\
    " damage. ";
    _hitpoints != 0 ? std::cout << "He has " << _hitpoints <<\
    " hit points left" : std::cout << "He dead.";
    std::cout << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;
    std::cout << "ScavTrap " << _name <<  " was repaired. " <<\
    "He has " << _hitpoints << " hit points." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode."\
              << std::endl;
}

