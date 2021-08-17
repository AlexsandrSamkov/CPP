#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap {
    public:
/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/
        FragTrap();
        FragTrap(std::string const &name);
        FragTrap(FragTrap const &fragTrap);
        virtual ~FragTrap();
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
        FragTrap &operator=(FragTrap const &fragTrap);
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
virtual void takeDamge(unsigned int amount);
virtual void attack(std::string const &target);
virtual void beRepaired(unsigned int amount);
void highFivesGuys();
};
#endif