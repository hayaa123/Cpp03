#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{
    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);
        virtual ~ScavTrap();
        ScavTrap& operator=(const ScavTrap& other);
        void guardGate(); 
};

#endif