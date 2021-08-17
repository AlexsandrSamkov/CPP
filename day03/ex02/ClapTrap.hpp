#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap {
public:
/******************************************************************************/
/*                         CONSTRUCTORS AND DESTRUCTORS                       */
/******************************************************************************/
    ClapTrap();
    ClapTrap(ClapTrap const &clapTrap);
    ClapTrap(std::string const &name);
    virtual ~ClapTrap();
/******************************************************************************/
/*                           OVERLOADING OPERATORS                            */
/******************************************************************************/
    ClapTrap &operator=(const ClapTrap &clapTrap);
/******************************************************************************/
/*                            GETTERS AND SETTERS                             */
/******************************************************************************/
    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
    void set(std::string name, unsigned  int hitpoints,\
             unsigned int enegryPoints, unsigned int attackDamage);
/******************************************************************************/
/*                              OTHER METHODS                                 */
/******************************************************************************/
    virtual void takeDamge(unsigned int amount);
    virtual void attack(std::string const &target);
    virtual void beRepaired(unsigned int amount);

protected:
    std::string     _name;
    unsigned int    _hitpoints;
    unsigned int    _enegryPoints;
    unsigned int    _attackDamage;
};
std::ostream &operator<<(std::ostream &output, const ClapTrap &clapTrap);
#endif