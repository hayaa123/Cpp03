#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "Default Constructor called: " << _name << "FragTrap has been created." << std::endl;
}

FragTrap::FragTrap(const std::string &name):
ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << name << " FragTrap has been created."<<std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
: ClapTrap(other)
{
    std::cout << this->_name << " FragTrap copy has been created."<<std::endl;   
}

FragTrap::~FragTrap()
{
    std::cout << this->_name << " FragTrap has been deleted."<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if(this == &other)
        return (*this);
    this->ClapTrap::operator=(other);
    return (*this);
}

void FragTrap::highFivesGuys( void )
{
     std::cout << "high fives guys :D" << std::endl;
}