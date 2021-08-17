#include "ClapTrap.hpp"

/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/

ClapTrap::ClapTrap() {
    _name = std::string().empty();
    _attackDamage = 0;
    _enegryPoints = 10;
    _hitpoints = 10;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) {
    _name = name;
    _attackDamage = 0;
    _enegryPoints = 10;
    _hitpoints = 10;
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
    std::cout  << "ClapTrap copy constructor called." << std::endl;
    *this = clapTrap;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called." << std::endl;
}

/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
    std::cout << "ClarTrap overloading = called" << std::endl;
    this->set(clapTrap.getName(), clapTrap.getHitPoints(),\
              clapTrap.getEnergyPoints(), clapTrap.getAttackDamage());
    return (*this);
}

/******************************************************************************/
/*                            GETTERS AND SETTERS                             */
/******************************************************************************/

void ClapTrap::set(std::string name, unsigned int hitpoints,
                   unsigned int enegryPoints, unsigned int attackDamage) {
    _name = name;
    _hitpoints = hitpoints;
    _enegryPoints = enegryPoints;
    _attackDamage = attackDamage;
}

std::string ClapTrap::getName() const{
    return (_name);
}

unsigned int ClapTrap::getAttackDamage() const{
    return (_attackDamage);
}

unsigned int ClapTrap::getHitPoints() const{
    return (_hitpoints);
}

unsigned int ClapTrap::getEnergyPoints() const{
    return (_enegryPoints);
}

/******************************************************************************/
/*                            OTHER CLASS METHODS                             */
/******************************************************************************/

void ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << _name  << " attack " << target\
     << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamge(unsigned int amount) {
    unsigned int tmpAmount = amount;
    while (tmpAmount > 0 && _hitpoints > 0) {
        tmpAmount--;
        _hitpoints--;
    }
    std::cout << "ClapTrap " << _name << " received " << amount <<\
    " damage. ";
    _hitpoints != 0 ? std::cout << "He has " << _hitpoints <<\
    " hit points left" : std::cout << "He dead.";
    std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    _hitpoints += amount;
    std::cout << "ClapTrap " << _name <<  " was repaired. " <<\
    "He has " << _hitpoints << " hit points." << std::endl;
}

std::ostream &operator<<(std::ostream &output, const ClapTrap &clapTrap)
{
    output << "Name: " << clapTrap.getName() << ". HP: "\
    << clapTrap.getHitPoints() << ". Attack: " << clapTrap.getAttackDamage()\
    << ". EP: " << clapTrap.getEnergyPoints() << ".";
    return (output);
}
