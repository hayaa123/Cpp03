#include "ScavTrap.hpp"

int main()
{
    ScavTrap trap1("trap1");

    ScavTrap trap2("trap2");
    
    trap1.attack("human1");
    trap1.takeDamage(20);
    trap1.beRepaired(2);
    trap2.guardGate();
}