#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	int N = 10;
	Zombie *horde = zombieHorde(N,"Yasha");
	for(int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}
