#include "Zombie.hpp"

int main()
{

    Zombie tom = Zombie("Tom");

    tom.announce();
    tom.~Zombie();

    Zombie aliveUntilMainEnd = Zombie("alive until main end");
    aliveUntilMainEnd.announce();

    Zombie *kei = newZombie("kei");
    kei->announce();
    delete kei;

    randomChump("chump");
    randomChump("cooh");

    return (0);
}
