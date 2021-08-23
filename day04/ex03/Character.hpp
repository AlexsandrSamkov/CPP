#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>
# include <iostream>
# define SIZE_INVETORY 4
# define SIZE_TRASH 100
class Character : public ICharacter {
public:
    Character();
    Character(Character const &characters);
    Character(ICharacter const &characters);
    Character(std::string const &name);
    ~Character();
    Character &operator=(Character const &character);
    AMateria const *getInventory0() const;
    AMateria const *getInventory1() const;
    AMateria const *getInventory2() const;
    AMateria const *getInventory3() const;
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string _name;
    AMateria *_inventory[SIZE_INVETORY];
    AMateria *_trash[SIZE_TRASH];
};
std::ostream &operator<<(std::ostream &output,Character const &character);
#endif