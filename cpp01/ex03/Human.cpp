#include "Human.hpp"

// public
Human::Human(std::string name_, Weapon weapon)
    : weapon(weapon)
{
    while (!validName(name_))
    {
        std::cout << "Name is invalid, Enter again" << std::endl;
        std::cin >> name;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    name = name_;
}

Human::~Human() {}

Weapon Human::getWeapon()
{
    return weapon;
}

void Human::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

void Human::attack()
{
    if (canAttack())
        std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

// private
bool Human::validName(std::string &name)
{
    return name.length() != 0;
}