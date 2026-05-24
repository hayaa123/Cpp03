#include "FragTrap.hpp"

int main()
{
    FragTrap trap1("frag1");

    FragTrap trap2("frag2");
    
    trap2 = trap1;
    trap1.attack("human1");
    trap1.takeDamage(20);
    trap1.beRepaired(2);
    trap2.highFivesGuys();
}