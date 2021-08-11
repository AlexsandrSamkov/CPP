#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
/******************************************************************************/
/*                       CONSTRUCTORS AND DESTRUCTORS                         */
/******************************************************************************/
    ScavTrap();
    ScavTrap(const std::string &name);
    ~ScavTrap();
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
   ScavTrap& operator=(const ScavTrap &scavTrap);
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
    void guardGate();
};
#endif