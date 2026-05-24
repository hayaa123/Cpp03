#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << name << " has been created."<<std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->_name = other._name;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    std::cout << this->_name << " copy has been created."<<std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " has been deleted."<<std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if(this == &other)
        return (*this);
    this->_name = other._name;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    return (*this);
}
void ClapTrap::attack(const std::string& target)
{
    if( this->_hitPoints == 0)
    {
        std::cout << this->_name <<" cannot attack because it is destroyed!" << std::endl;
        return;
    }
    if(this->_energyPoints == 0)
    {
        std::cout << this->_name <<" has no energy!" << std::endl;
        return;
    }
    this->_energyPoints -=1;
    std::cout << "ClapTrap " 
    << this->_name 
    << " attacks "
    << target 
    <<" , causing "
    << this->_attackDamage
    <<" points of damage! "
    << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    unsigned int damage;
    if(this->_hitPoints == 0)
    {
        std::cout << this->_name <<" is already destroyed!" << std::endl;
        return;
    }
    if(amount > this->_hitPoints)
       damage = this->_hitPoints;
    else 
        damage = amount;
    this->_hitPoints -= damage;
    std::cout <<  "ClapTrap " 
    << this->_name 
    << " has taken a damage of " 
    << damage
    << " points" 
    << std::endl;
    std::cout << "current hit points: " 
    << this->_hitPoints 
    << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if( this->_hitPoints == 0)
    {
        std::cout << this->_name <<" cannot repair because it is destroyed!" << std::endl;
        return;
    }
    if(this->_energyPoints == 0)
    {
        std::cout << this->_name <<" has no energy!" << std::endl;
        return;
    }
    this->_energyPoints -=1;
    this->_hitPoints += amount;
    std::cout <<  "ClapTrap " 
    << this->_name 
    << " has been repaired by "
    << amount 
    << " points"
    << std::endl;
    std::cout << "current hit points: " 
    << this->_hitPoints 
    << std::endl;
}
