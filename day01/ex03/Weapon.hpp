#ifndef WEAPON
# define WEAPON
# include <string>
# include <iostream>

class Weapon {
public:
	Weapon(std::string type);
	void setType(std::string type);
	const std::string &getType(void);
private:
	std::string type;
};
#endif