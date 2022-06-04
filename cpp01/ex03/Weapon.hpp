#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>
#include <limits>

class Weapon
{
public:
    Weapon(std::string type);
    ~Weapon();

    std::string getType();
    void setType(std::string);

private:
    std::string type;
    bool validType(std::string &type);
};

#endif
