#include "Zombie.hpp"

void    Zombie::zombieInitName(std::string name)
{
    _zombieName[0] = name;
    _zombieName[1] = "joe";
    _zombieName[2] = "arrrr";
    _zombieName[3] = "saj";
    _zombieName[4] = "raze?";
}
/*
void    Zombie::newZombie(std::string name)
{
	this->name = name;
    std::cout << "zombie " << name << std::endl;
}
*/
/*
void    Zombie::zombieSetName(Zombie *zombie, int i)
{
    newZombie(_zombieName[i]);
}
*/

void Zombie::annouceHorde()
{
	for (int i = 0; i < 5; i++)
	{
		_zombieHorde[i].Announce();
	}
}

void    Zombie::zombieSetName(int i)
{
    this->name = _zombieName[i];
   // std::cout << "zombie " << this->name << std::endl;
}

void    Zombie::hordeInit(int N, Zombie *horde, std::string name)
{
    zombieInitName(name);
    _zombieHorde = horde;
    //_zombieHorde[2].Announce();
    for(int i = 0; i < N; i++)
    {
        Zombie::zombieSetName(i);
    }
    annouceHorde();
    //delete [] _zombieHorde;

}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde = new Zombie[5];
    horde->hordeInit(N, horde, name);
    return horde;
}