#ifndef HUMAN_B
# define HUMAN_B
# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB {
public:
	HumanB(std::string name);

	void setWeapon(Weapon &weapon);
	void attack(void);
private:
	std::string name;
	Weapon *weapon;
};
#endif