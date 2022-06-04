#include "Weapon.hpp"

/* public */
Weapon::Weapon(std::string type)
{
    while (!validType(type))
    {
        std::cout << "Type is invalid, Enter again" << std::endl;
        std::cin >> type;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    this->type = type;
}

Weapon::~Weapon() {}

std::string Weapon::getType() { return type; }

void Weapon::setType(std::string _type) { type = _type; }

/*private*/
bool Weapon::validType(std::string &type)
{
    return type.length() != 0;
}