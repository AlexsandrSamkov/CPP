#include "Zombie.hpp"

Zombie::Zombie(std::string newName) {
	this->name = newName;
}

Zombie::Zombie(void) {
}

void Zombie::announce()
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newName)
{
	this->name = newName;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is died" << std::endl;
}