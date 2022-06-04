#include "HumanA.hpp"

// public
HumanA::HumanA(std::string _name, Weapon _weapon)
    : Human(_name, _weapon) {}

HumanA::~HumanA() {}

// private
bool HumanA::canAttack()
{
    return true;
}