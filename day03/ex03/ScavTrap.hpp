#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
/******************************************************************************/
/*                       CONSTRUCTORS AND DESTRUCTORS                         */
/******************************************************************************/
    ScavTrap();
    ScavTrap(ScavTrap const &scavTrap);
    ScavTrap(const std::string &name);
    virtual ~ScavTrap();
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
    ScavTrap &operator=(ScavTrap const &scavTrap);
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
    void guardGate();
    virtual void takeDamge(unsigned int amount);
    virtual void attack(std::string const &target);
    virtual void beRepaired(unsigned int amount);
};
#endif