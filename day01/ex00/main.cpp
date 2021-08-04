#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
	Zombie *zombiePasha = newZombie("Pasha");
	Zombie *zombiePetya =  newZombie("Petya");
	randomChump("Sasha");
	delete zombiePasha;
	delete zombiePetya;
}
