#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):
ClapTrap("unnamed_clap_name"),
FragTrap(),
ScavTrap(),
_name("unnamed")
{
    std::cout << "Default Constructor called: " << _name << " DiamondTrap has been created."<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name):
ClapTrap(name + "_clap_name"),
FragTrap(name), ScavTrap(name),
_name(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << _name << " DiamondTrap has been created."<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):
ClapTrap(other._name + "_clap_name"),
FragTrap(other),
ScavTrap(other),
_name(other._name)
{
    std::cout << this->_name << " DiamondTrap copy has been created."<<std::endl;   
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->_name << " DiamondTrap has been deleted."<<std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    std::cout << "DiamondTrap called attack" << std::endl;
    ScavTrap::attack(target);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    if(this == &other)
        return (*this);
    this->ClapTrap::operator=(other);
    this->_name = other._name;
    return (*this);
}

void DiamondTrap::whoAmI()
{
     std::cout << "my name is: "<< this->_name << std::endl;
     std::cout << "my ClapTrap name is: "<< this->ClapTrap::_name << std::endl;
}