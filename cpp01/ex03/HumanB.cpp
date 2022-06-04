#include "HumanB.hpp"

// public
HumanB::HumanB(std::string name)
    : Human(name, Weapon("unarmed")) {}

HumanB::HumanB(std::string name, Weapon wepon)
    : Human(name, wepon) {}

HumanB::~HumanB() {}

// private
bool HumanB::canAttack()
{
    return weapon.getType() != "unarmed";
}