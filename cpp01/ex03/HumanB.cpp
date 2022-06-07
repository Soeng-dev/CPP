#include "HumanB.hpp"

// public
HumanB::HumanB(std::string name)
    : Human(name, NULL) {}

HumanB::HumanB(std::string name, Weapon &weapon)
    : Human(name, weapon) {}

HumanB::~HumanB() {}

// private
bool HumanB::canAttack()
{
    return weapon;
}