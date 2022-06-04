#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie temp = Zombie(name);

    return temp.newHorde(N);
}