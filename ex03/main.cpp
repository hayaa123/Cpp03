#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap trap1("diamond1");

    DiamondTrap trap2("diamond2");
    
    trap2 = trap1;
    trap1.attack("human1");
    trap1.takeDamage(20);
    trap1.beRepaired(2);
    trap2.whoAmI();
}