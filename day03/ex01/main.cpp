#include "ClapTrap.hpp"
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
    trapTestMethods(clap, "clap");
    trapTestMethods(scav, "scav");
    scav.guardGate();
}