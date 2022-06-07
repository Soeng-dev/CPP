#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Human.hpp"

class HumanA : public Human
{

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();

private:
    virtual bool canAttack();
};

#endif