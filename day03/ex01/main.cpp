#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
void trapTestMethods(ClapTrap &clap, const std::string& nameObj)
{
    std::cout << "[ " << nameObj << " ]" << std::endl;
    clap.attack("ENEMY");
    clap.beRepaired(20);
    clap.takeDamge(20);
}

int main() {

    ScavTrap scav("SCAVTRAP");
    ScavTrap scavCopy(scav);
    std::cout << std::endl;
    ScavTrap scavEqual = scav;
    trapTestMethods(scav, "scav");
    scav.guardGate();
    trapTestMethods(scavCopy, "scavCopy");
    scavCopy.guardGate();
    trapTestMethods(scavEqual, "scavEqual");
    scavEqual.guardGate();
}