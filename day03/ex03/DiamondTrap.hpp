#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap {
public:
/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/
    DiamondTrap();
    DiamondTrap(DiamondTrap const &diamondTrap);
    DiamondTrap(std::string name);
    ~DiamondTrap();
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
    DiamondTrap &operator=(DiamondTrap const &diamondTrap);
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
    virtual void takeDamge(unsigned int amount);
    virtual void attack(std::string const &target);
    virtual void beRepaired(unsigned int amount);
    void whoAmI();
private:
    std::string _clap_name;
};
#endif