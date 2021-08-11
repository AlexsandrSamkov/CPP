#include "ScavTrap.hpp"

/******************************************************************************/
/*                       CONSTRUCTORS AND DESTRUCTORS                         */
/******************************************************************************/

ScavTrap::ScavTrap() {
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
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << "have enterred in Gate keeper mode"\
              << std::endl;
}