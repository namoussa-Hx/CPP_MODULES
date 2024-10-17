#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <new>

class Weapon
{
    private:
    std::string type;
    public:
    ~Weapon();
    Weapon(void);
    const std::string& getType(void) const;
    void setType(std::string type);
};

#endif 