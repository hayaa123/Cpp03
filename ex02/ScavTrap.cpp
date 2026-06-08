#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default Constructor called: " << _name << " ScavTrap has been created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name):
ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << name << " ScavTrap has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
: ClapTrap(other)
{
    std::cout << "Copy Constructor called: " << this->_name << " ScavTrap copy has been created."<<std::endl;   
}

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << " ScavTrap has been deleted."<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if(this == &other)
        return (*this);
    this->ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::guardGate()
{
     std::cout << this->_name << " ScavTrap is now in Gate keeper mode." << std::endl;
}