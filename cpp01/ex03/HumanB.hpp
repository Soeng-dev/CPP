
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Human.hpp"

class HumanB : public Human
{
public:
    HumanB(std::string name);
    HumanB(std::string _name, Weapon &_wepon);
    ~HumanB();

private:
    virtual bool canAttack();
};

#endif