#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string newName);
	Zombie(void);
	~Zombie();
	void setName(std::string newName);
	void announce(void);
};
#endif