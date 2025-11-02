#include "Zombie.hpp"

int main(void)
{
    Zombie *a;
    a = zombieHorde(10, "Tibo");
    for(int i = 0; i < 10; i++)
        std::cout << a->getName() << " est le :" << i + 1 << std::endl;
    delete[] a;
}