#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include <string>
#include <sstream>

#include "Weapon.hpp"

class Human
{
public:
    Human(std::string name, Weapon &weapon);
    Human(std::string name, Weapon *weapon_ = NULL);
    virtual ~Human();

    void setWeapon(Weapon &weapon);

    void attack();

protected:
    Weapon *weapon;

    bool validName(std::string &name);

private:
    virtual bool canAttack() = 0;
    std::string name;
};
#endif