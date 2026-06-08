#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap{
    public:
        FragTrap(void);
        FragTrap(const std::string& name);
        FragTrap(const FragTrap& other);
        virtual ~FragTrap();
        FragTrap& operator=(const FragTrap& other);
        void highFivesGuys(void);
};

#endif