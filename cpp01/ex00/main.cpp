#include "Zombie.hpp"

int main(void)
{
    Zombie *a;
    a = newZombie("doriane");
    a->announce();
    randomChump("tibolebg");
    delete a;
}