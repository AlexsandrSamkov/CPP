#include "Zombie.hpp"


Zombie::Zombie()
{
}
Zombie::Zombie(std::string newName) 
{
	this->name = newName;
}
void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is died" << std::endl;
}