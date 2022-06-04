
#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie() : name("") {}

Zombie::~Zombie() {}

Zombie *Zombie::newHorde(int len)
{
    Zombie *horde = new Zombie[len];

    for (int i = 0; i < len; ++i)
        horde[i].name = this->name;

    return horde;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->name << ">: BraiiiiiiinnnzzzZ..." << std::endl;
}