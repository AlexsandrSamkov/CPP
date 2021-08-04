#ifndef HUMAN_A
# define HUMAN_A
# include "Weapon.hpp"
# include <iostream>
class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void);
private:
	std::string name;
	Weapon &weapon;
};
#endif