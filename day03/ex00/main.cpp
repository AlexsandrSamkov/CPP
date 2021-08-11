#include "ClapTrap.hpp"

void trapTestMethods(ClapTrap &clap, const std::string& nameObj)
{
    std::cout << "[ " << nameObj << " ]" << std::endl;
    clap.attack("ENEMY");
    clap.beRepaired(20);
    clap.takeDamge(20);
}

int main() {
    ClapTrap clap("CLAPTRAP");
    ClapTrap clapCopy(clap);
    ClapTrap clapEqual = clap;
    trapTestMethods(clap, "clap");
    trapTestMethods(clapCopy, "clapCopy");
    trapTestMethods(clapEqual, "clapEqual");
}