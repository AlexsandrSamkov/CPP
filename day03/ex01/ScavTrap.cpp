#include "ScavTrap.hpp"

/******************************************************************************/
/*                       CONSTRUCTORS AND DESTRUCTORS                         */
/******************************************************************************/

ScavTrap::ScavTrap():ClapTrap() {
    _name = std::string().empty();
    _attackDamage = 0;
    _enegryPoints = 10;
    _hitpoints = 10;
    _nameClass = "ScavTrap";
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) {
    _name = name;
    _attackDamage = 20;
    _enegryPoints = 50;
    _hitpoints = 100;
    _nameClass = "ScavTrap";
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called." << std::endl;
}
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
    std::cout << "ScavTrap assignation operator called." << std::endl;
    this->set(scavTrap.getName(), scavTrap.getHitPoints(),\
    scavTrap.getEnergyPoints(), scavTrap.getAttackDamage());
              return (*this);
}

/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode."\
              << std::endl;
}