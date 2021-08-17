#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
void trapTestMethods(ClapTrap &clap, const std::string& nameObj)
{
    std::cout << "[ " << nameObj << " ]" << std::endl;
    std::cout << clap << std::endl;
    clap.attack("ENEMY");
    clap.beRepaired(20);
    clap.takeDamge(20);
}

int main() {
    ClapTrap clap("CLAPTRAP");
    ClapTrap clapCopy(clap);
    ClapTrap clapEqual = clap;
    std::cout << "-----------------------------" << std::endl;
    ScavTrap scav("SCAVTRAP");
    ScavTrap scapCopy(scav);
    ScavTrap scapEqual = scav;
    std::cout << "-----------------------------" << std::endl;
    FragTrap frag("FRAGTRAP");
    FragTrap fragCopy(frag);
    FragTrap fragEqual(frag);
    trapTestMethods(clap, "clap");
    trapTestMethods(scav, "scav");
    scav.guardGate();
    trapTestMethods(frag, "frag");
    frag.highFivesGuys();
}