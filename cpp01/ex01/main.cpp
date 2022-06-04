#include "Zombie.hpp"

int main()
{
    Zombie *z;
    std::string hordeName;
    int n;

    n = 5;
    hordeName = "42";
    z = zombieHorde(n, hordeName);
    for (int i = 0; i < n; ++i)
    {
        z[i].announce();
    }
    delete[] z;
}