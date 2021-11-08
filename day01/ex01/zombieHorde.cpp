#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    if (N <= 0)
        return NULL;
    Zombie *horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        std::string newName = name + std::to_string(i+1);
        Zombie *zombie = new Zombie(newName);
        horde[i] = *zombie;
    }
    return horde;
}