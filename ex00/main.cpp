#include "ClapTrap.hpp"

int main()
{
    ClapTrap trap1("trap1");
    trap1.attack("human1");
    trap1.takeDamage(5);
    trap1.beRepaired(2);
}